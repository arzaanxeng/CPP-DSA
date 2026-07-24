#include <iostream>
#include <vector>
#include <set>

using namespace std;

void union_two(const vector<int> &nums1, const vector<int> &nums2) {
    set<int> combined;

    // Insert all elements from both vectors into one set
    for (int num : nums1) combined.insert(num);
    for (int num : nums2) combined.insert(num);


    for (int num : combined) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter the number of elements in array 1: ";
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> v1[i];
    }

    int m;
    cout << "Enter the number of elements in array 2: ";
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++) { // Fixed: i < m
        cout << "Enter element " << (i + 1) << ": ";
        cin >> v2[i];
    }

    cout << "\nUnion of the two arrays: ";
    union_two(v1, v2);

    return 0;
}