#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "a = " << a << " = " << bitset<8>(a) << endl;
    cout << "b = " << b << " = " << bitset<8>(b) << endl;

    cout << "\n================ BITWISE OPERATORS ================\n";

    cout << "\na & b\n";
    cout << (a & b) << " = " << bitset<8>(a & b) << endl;

    cout << "\na | b\n";
    cout << (a | b) << " = " << bitset<8>(a | b) << endl;

    cout << "\na ^ b\n";
    cout << (a ^ b) << " = " << bitset<8>(a ^ b) << endl;

    cout << "\n~a\n";
    cout << (~a) << endl;

    cout << "\na << 1\n";
    cout << (a << 1) << " = " << bitset<8>(a << 1) << endl;

    cout << "\na >> 1\n";
    cout << (a >> 1) << " = " << bitset<8>(a >> 1) << endl;

    cout << "\n================ LOGICAL OPERATORS ================\n";

    cout << (a > 5 && b < 30) << endl;
    cout << (a > 50 && b < 30) << endl;

    cout << (a > 5 || b > 50) << endl;
    cout << (a > 50 || b > 50) << endl;

    cout << !(a > 5) << endl;
    cout << !(a > 50) << endl;

    cout << "\n================ BIT CHECKING ================\n";

    int i = 1;

    if (a & (1 << i))
        cout << "Bit " << i << " is SET\n";
    else
        cout << "Bit " << i << " is NOT SET\n";

    cout << "\n================ SET BIT ================\n";

    int x = a;
    x = x | (1 << 0);

    cout << x << " = " << bitset<8>(x) << endl;

    cout << "\n================ CLEAR BIT ================\n";

    x = a;
    x = x & ~(1 << 1);

    cout << x << " = " << bitset<8>(x) << endl;

    cout << "\n================ TOGGLE BIT ================\n";

    x = a;
    x = x ^ (1 << 3);

    cout << x << " = " << bitset<8>(x) << endl;

    cout << "\n================ ODD / EVEN ================\n";

    if (a & 1)
        cout << "a is Odd\n";
    else
        cout << "a is Even\n";

    cout << "\n================ POWER OF TWO ================\n";

    int n = 16;

    if ((n & (n - 1)) == 0)
        cout << n << " is Power of Two\n";
    else
        cout << n << " is NOT Power of Two\n";

    cout << "\n================ POPCOUNT ================\n";

    cout << "__builtin_popcount(a) = "
         << __builtin_popcount(a) << endl;

    return 0;
}