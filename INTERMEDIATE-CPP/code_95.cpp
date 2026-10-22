// =====================================================================
//  Pointers and Memory Management in C++
//  (code for the "Pointers" Excalidraw notes, section by section)
//
//  Build : g++ -std=c++17 -Wall -Wextra -o pointers pointers.cpp
//  Run   : ./pointers
//
//  NOTE: the notes use made-up addresses (100, 104, 200 ...) to explain
//  the idea. Real addresses are big hex numbers and change on every run,
//  so the program prints them but you should never hard-code them.
// =====================================================================
#include <iostream>
#include<vector>
#include<string>
using namespace std;

// Small helper so every section prints a clear heading.
void heading(const string &title) {
    cout << "\n==================== " << title << " ====================\n";
}

// ---------------------------------------------------------------------
// SECTION 1: Reference variables
// A reference is an ALIAS: just another name for an EXISTING variable.
// It does not create a new copy, so it saves memory.
// ---------------------------------------------------------------------
void section1_references() {
    heading("1. Reference variables");

    // ---- (a) Normal variable: y is a COPY of x ----
    {
        int x = 10;
        int y = x;   // y gets its own memory, initialised with x's value (10)
        y++;         // only y changes -> 11
        x *= 10;     // only x changes -> 100
        cout << "[copy]  x = " << x << ", y = " << y << "\n";   // 100, 11
    }

    // ---- (b) Reference: y is another NAME for x (same memory) ----
    {
        int x = 10;
        int &y = x;  // y is an alias of x. Type of x -> int, type of y -> int
        y++;         // x and y are the same box: 10 -> 11
        x *= 10;     // 11 -> 110
        cout << "[ref]   x = " << x << ", y = " << y << "\n";   // 110, 110
        cout << "        &x = " << &x << "\n";
        cout << "        &y = " << &y << "   (same address as x)\n";
    }

    // ---- (c) Reference to a reference: x, y, z are all ONE memory box ----
    {
        int x = 10;
        int &y = x;  // y -> x
        int &z = y;  // z -> y, which really means z -> x's memory
        x++;         // 11
        y++;         // 12
        z = 0;       // writes 0 into the shared memory
        cout << "[chain] x = " << x << ", y = " << y << ", z = " << z << "\n"; // 0 0 0
    }

    // ---- (d) Rules of references ----
    {
        int a = 10;
        int c = 20;
        int &b = a;  // b is bound to a. This binding can NEVER change.

        // "&b = c;" is not valid C++. What people usually mean is:
        b = c;       // this does NOT rebind b to c. It copies c's VALUE into a.
        cout << "[rules] a = " << a << ", b = " << b << ", c = " << c << "\n";  // 20 20 20
        cout << "        b still refers to a: &a == &b ? " << boolalpha << (&a == &b) << "\n";

        // int &x;   // COMPILATION ERROR: a reference MUST be initialised
        //           // at creation, because it has to know which memory
        //           // location it refers to.
    }
}

// ---------------------------------------------------------------------
// SECTION 2: Copy vs reference with vector and string
// Copying a container copies EVERY element: time and memory heavy.
// ---------------------------------------------------------------------
void section2_containers() {
    heading("2. vector / string: copy vs reference");

    // ---- vector copy ----
    {
        vector<int> a = {1, 2, 3};
        vector<int> b = a;   // b is a whole NEW vector (a deep copy)
        b[0]++;              // only b changes
        cout << "[vector copy] a[0] = " << a[0] << "\n";   // 1  (A is the answer)
    }

    // ---- vector reference ----
    {
        vector<int> a = {1, 2, 3};
        vector<int> &b = a;  // b is just another name for a
        b[0]++;              // changes a itself
        cout << "[vector ref ] a[0] = " << a[0] << "\n";   // 2
    }

    // ---- string copy ----
    {
        string s = "dhruv";
        string t = s;        // t gets its own characters
        t[0] = 'a';          // only t is "ahruv"
        cout << "[string copy] s[0] = " << s[0] << "\n";   // 'd'
    }

    // ---- string reference ----
    {
        string s = "dhruv";
        string &t = s;       // t is an alias of s
        t[0] = 'a';          // s becomes "ahruv"
        cout << "[string ref ] s[0] = " << s[0] << "\n";   // 'a'
    }
}

// ---------------------------------------------------------------------
// SECTION 3: Pass by value vs pass by reference
// Passing a string/vector BY VALUE copies it on every call.
// In a recursion of depth n that is n copies -> TLE / MLE.
// Fix: pass them by reference.
// ---------------------------------------------------------------------

// BAD: copies the whole vector at every recursive call.
// Space becomes O(n) per call * n calls = O(n^2).
void printBad(vector<int> a, int n) {
    if (n == 0) return;
    cout << a[n - 1] << " ";
    printBad(a, n - 1);
}

// GOOD: no copy, every call works on the original vector.
// (const because we only read it.)
void printGood(const vector<int> &a, int n) {
    if (n == 0) return;
    cout << a[n - 1] << " ";
    printGood(a, n - 1);
}

// Swap by VALUE: a and b are copies, the caller's variables are untouched.
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap by REFERENCE: a and b are aliases of the caller's variables.
void swapByRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap by ADDRESS: we receive addresses and write through them (see section 6).
void swapByAddress(int *a, int *b) {
    int temp = *a;   // value at address a
    *a = *b;
    *b = temp;
}

void section3_passing() {
    heading("3. Pass by value / reference / address");

    vector<int> v = {1, 2, 3, 4, 5};
    cout << "[printBad ] ";  printBad(v, 5);  cout << "\n";
    cout << "[printGood] ";  printGood(v, 5); cout << "\n";

    int a = 10, b = 20;
    swapByValue(a, b);
    cout << "[swap by value  ] a = " << a << ", b = " << b << "   (unchanged)\n";   // 10 20

    swapByRef(a, b);
    cout << "[swap by ref    ] a = " << a << ", b = " << b << "   (swapped)\n";     // 20 10

    swapByAddress(&a, &b);
    cout << "[swap by address] a = " << a << ", b = " << b << "   (swapped back)\n"; // 10 20
}

// ---------------------------------------------------------------------
// SECTION 4: Address-of operator (&) and memory layout
// Every variable lives at an address. & gives it to us.
// ---------------------------------------------------------------------
void section4_addresses() {
    heading("4. Address-of operator (&)");

    int x = 10;
    cout << "x  = " << x  << "\n";    // 10
    cout << "&x = " << &x << "\n";    // some address, printed in hexadecimal (base 16)

    int y = x;                        // y is a COPY, so it lives somewhere else
    cout << "y  = " << y  << "\n";    // 10
    cout << "&y = " << &y << "   (different from &x)\n";

    // Addresses are just numbers. Hex (base 16) is only a compact way to write them.
    // Same number, different bases:
    uintptr_t addr = reinterpret_cast<uintptr_t>(&x);
    cout << "address of x in base 10: " << addr << "\n";
    cout << "address of x in base 16: " << hex << addr << dec << "\n";
    cout << "address of x in base 2 : " << bitset<48>(addr) << "\n";

    // Different types take different amounts of memory.
    int       a = 10;
    char      b = 'x';
    long long c = 15267891378911LL;

    cout << "\nsizeof(int) = " << sizeof(a)
         << ", sizeof(char) = " << sizeof(b)
         << ", sizeof(long long) = " << sizeof(c) << "\n";   // 4, 1, 8

    cout << "&a = " << &a << "\n";
    // PITFALL: cout << &b would treat a char* as a C-string and print garbage
    // until it finds '\0'. Cast to void* to print the real address.
    cout << "&b = " << static_cast<void *>(&b) << "\n";
    cout << "&c = " << &c << "\n";

    // Arrays / vectors use CONTIGUOUS memory: an int at 100 means the next
    // int is at 104, then 108 ... (each int is 4 bytes).
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
        cout << "&arr[" << i << "] = " << &arr[i] << "\n";   // each 4 bytes apart

    // The symbols "&" has THREE meanings depending on context:
    int p = 10, q = 20;
    int &ref = p;                       // 1) reference variable (in a declaration)
    cout << "&p (address of)   = " << &p << "\n";   // 2) address-of operator
    cout << "p & q (bitwise)   = " << (p & q) << "\n"; // 3) bitwise AND (10 & 20 = 0)
    (void)ref;
}

// ---------------------------------------------------------------------
// SECTION 5: Dereferencing and arrays
// Dereference operator *  =  "value at address".
//   *(address) -> value
// ---------------------------------------------------------------------
void section5_dereference() {
    heading("5. Dereferencing and arrays");

    int x = 10;
    // We have &x (the address). Can we get the 10 back from it? Yes:
    cout << "&x    = " << &x << "\n";
    cout << "*(&x) = " << *(&x) << "\n";   // value at address of x -> 10

    // & and * are inverses of each other:  *(&x) == x

    // Arrays: A is the BASE ADDRESS of the array (address of A[0]).
    int A[] = {1, 2, 3, 4, 5, 6};

    // Adding 1 to an int address moves by 1 * sizeof(int) = 4 bytes,
    // so (100 + 1) is 104, not 101.
    //   A[i] == *(A + i)
    cout << "A[0] = *(A + 0) = *A = " << *A << "\n";
    cout << "A[1] = *(A + 1)      = " << *(A + 1) << "\n";
    for (int i = 0; i < 6; i++) {
        cout << "A[" << i << "] = " << A[i]
             << "  | *(A+" << i << ") = " << *(A + i)
             << "  | address = " << (A + i) << "\n";
    }
}

// ---------------------------------------------------------------------
// SECTION 6: Pointers
// A pointer is a special variable that STORES THE ADDRESS of an existing
// variable. To store an address in a variable we need a pointer.
// ---------------------------------------------------------------------
void section6_pointers() {
    heading("6. Pointers");

    int       a = 10;
    char      b = 'd';
    long long c = 20187489021LL;

    // The notes joke: "Sadly, we don't have a generic `pointer ptrA = &a;`".
    // The pointer must know the TYPE it points to, so that *ptr knows how
    // many bytes to read and ptr + 1 knows how far to jump.
    int       *ptrA = &a;   // pointer to int
    char      *ptrB = &b;   // pointer to char
    long long *ptrC = &c;   // pointer to long long

    cout << "ptrA holds " << ptrA << "   -> *ptrA = " << *ptrA << "\n";
    cout << "ptrB holds " << static_cast<void *>(ptrB) << "   -> *ptrB = " << *ptrB << "\n";
    cout << "ptrC holds " << ptrC << "   -> *ptrC = " << *ptrC << "\n";

    // Every pointer is just an address, so it is the same size on a 64-bit
    // machine (8 bytes) whatever it points to.
    cout << "sizeof(ptrA) = " << sizeof(ptrA)
         << ", sizeof(ptrB) = " << sizeof(ptrB)
         << ", sizeof(ptrC) = " << sizeof(ptrC) << "\n";    // 8 8 8

    // Writing THROUGH a pointer changes the original variable.
    *ptrA = 99;
    cout << "after *ptrA = 99 -> a = " << a << "\n";        // 99

    // The pointer is itself a variable, so it also has an address.
    cout << "address of ptrA itself = " << &ptrA << "\n";

    // The symbol "*" has THREE meanings depending on context:
    int m = 10, n = 20;
    int *p = &m;                              // 1) declares a pointer
    cout << "*p   (value at)      = " << *p << "\n";       // 2) dereference
    cout << "m * n (multiplication) = " << m * n << "\n";  // 3) multiplication

    // Pointer arithmetic with arrays
    int arr[] = {10, 20, 30};
    int *ptr = arr;                  // arr decays to &arr[0]
    cout << "*ptr = " << *ptr << ", *(ptr+1) = " << *(ptr + 1) << ", *(ptr+2) = " << *(ptr + 2) << "\n";
    ptr++;                           // moves by sizeof(int) = 4 bytes
    cout << "after ptr++ -> *ptr = " << *ptr << "\n";      // 20
}

// ---------------------------------------------------------------------
// SECTION 7: Putting it together - a pointer's value is an address
// ---------------------------------------------------------------------
void section7_pointer_value() {
    heading("7. A pointer holds an address");

    int  x = 10;
    int *y = &x;      // y stores the address of x

    cout << "x  = " << x  << "\n";    // 10
    cout << "y  = " << y  << "   (address of x)\n";
    cout << "*y = " << *y << "   (value at that address, 10)\n";
    cout << "&y = " << &y << "   (y has its own, different address)\n";
}

int main() {
    // Competitive-programming note from the notes:
    //   #define int long long
    //   #define endl '\n'
    // They are NOT used here, because with `#define int long long` you must
    // write `signed main()` and sizeof(int) would no longer be 4 in the demos.
    // `endl` flushes the buffer every time, '\n' does not, so '\n' is faster.

    section1_references();
    section2_containers();
    section3_passing();
    section4_addresses();
    section5_dereference();
    section6_pointers();
    section7_pointer_value();
    return 0;
}