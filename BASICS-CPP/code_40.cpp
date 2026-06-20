#include<iostream>
#include <utility>
#include<set>
#include<map>
#include<list>
using namespace std;

int main(void){
    // ==========================================
    // 1. PAIRS (std::pair)
    // Used to couple two heterogeneous values together.
    // ==========================================
    pair<int,string> p1;
    p1 = {30, "Jenny"};
    cout << p1.first << " " << p1.second << endl;

    // Nested Pairs: Access via chaining dot operators (.second.first)
    pair<int, pair<int, string>> p2;
    p2 = {30, {15, "Loki"}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;


    // ==========================================
    // 2. LIST (std::list)
    // Structure: Implemented as a Doubly Linked List.
    // Memory: Non-contiguous. No random access (cannot do l[3]).
    // Time Complexities: Insertion/Deletion at ends is O(1).
    // ==========================================
    list<int> l;
    for(int i = 0 ; i <= 10 ; i++) l.push_back(i); // O(1) adds to the tail

    // 🔥 MISSED METHOD 1: push_front & popping
    l.push_front(-1); // O(1) insertion at head (Vectors cannot do this efficiently)
    l.pop_back();     // O(1) deletes from tail
    l.pop_front();    // O(1) deletes from head

    // 🔥 MISSED METHOD 2: Inserting at a specific position using iterator
    auto list_it = l.begin();
    advance(list_it, 2); // Moves iterator to index 2 safely
    l.insert(list_it, 999); // O(1) structural insertion once iterator is found

    // Iterators: forward traversal
    // l.begin() points to first element, l.end() points to memory JUST AFTER the last element
    for(auto it = l.begin() ; it != l.end() ; it++) cout << *it << " ";
    cout << endl;

    // Reverse Iterators: backward traversal
    // rbegin() points to last element, rend() points to memory JUST BEFORE first element
    for(auto it = l.rbegin() ; it != l.rend() ; it++) cout << *it << " ";
    cout << endl;
     

    // ==========================================
    // 3. SET (std::set)
    // Structure: Self-balancing Binary Search Tree (usually Red-Black Tree).
    // Properties: Stores UNIQUE elements in SORTED order (ascending by default).
    // Time Complexities: Search, Insertion, Deletion are all O(log n).
    // ==========================================
    set<int> s;
    int repeating_num = 100;
    for(int i = 10 ; i <= 25 ; i++) s.insert(i);
    
    // Sets ignore duplicates. Only the first 100 will be kept.
    s.insert(repeating_num);
    s.insert(repeating_num);
    s.insert(repeating_num);
    
    for(auto it = s.begin() ; it != s.end() ; it++) cout << *it << " ";
 
    // s.find(x) returns an iterator. If x isn't there, it returns s.end()
    if(s.find(100) != s.end()) cout << "\nPresent";
    else cout << "\nAbsent";

    if(s.find(170) != s.end()) cout << "\nPresent";
    else cout << "\nAbsent";

    // s.count(x) returns count of element. Since sets are unique, it returns either 1 or 0.
    // Useful as a short boolean check!
    if(s.count(100)) cout << "\nPresent";
    else cout << "\nAbsent";

    if(s.count(145)) cout << "\nPresent";
    else cout << "\nAbsent";

    // 🔥 MISSED METHOD 3: erase()
    s.erase(10); // O(log n) deletion by value

    // 🔥 CRITICAL MISSED METHOD 4: Lower Bound & Upper Bound (Interview Favorites)
    // lower_bound(x) -> returns iterator to first element >= x
    // upper_bound(x) -> returns iterator to first element > x
    auto lb = s.lower_bound(15); 
    auto ub = s.upper_bound(15);
    cout << "\nLower bound of 15: " << *lb << ", Upper bound of 15: " << *ub << endl;


    // ==========================================
    // 4. MAPS (std::map)
    // Structure: Self-balancing BST storing std::pair<const Key, Value>.
    // Properties: Sorted keys, unique keys.
    // Time Complexities: Lookups and insertions are O(log n).
    // ==========================================
    map<int, string> m1;
    map<int, string> m2 = {{1, "Geeks"}, {2, "For"}, {3, "Geeks"}};

    // Iteration: p is a pair. p.first is the Key, p.second is the Value
    for (auto &p : m2) cout << p.first << " " << p.second << endl;
    
    // Insertion Method A: Using pair insertion
    m2.insert({4, "Ryan"}); 

    // 🔥 MISSED METHOD 5: Access
    m2[5] = "Dan"; // Easily inserts {5, "Dan"}
    m2[1] = "Changed"; // Overwrites "Geeks" to "Changed" for Key 1!

    cout << endl;
    for (auto &p : m2) cout << p.first << " " << p.second << endl;
    
    // Searching for keys via find()
    if(m2.find(9) != m2.end()) cout << "\nKey is present";
    else cout << "\nKey is not present";
    
    return 0;
}