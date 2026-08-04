#include <iostream>
#include <vector>
using namespace std;

vector<int> findArray(const vector<int>& nums, int n, int target) {
    // 1. BASE CASE: Empty sub-array
    if (n == 0) return {}; 
    
    // 2. RECURSIVE CALL: Get all indices from the first (n-1) elements
    vector<int> ans = findArray(nums, n - 1, target);

    // 3. WORK AT CURRENT LEVEL: Check the n-1 th element
    if (nums[n - 1] == target) ans.push_back(n - 1);

    return ans;
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of " << (i + 1) << " element : ";
        cin >> v[i];
    }

    cout << "\nEnter the target value : ";
    cin >> k;

    vector<int> ans = findArray(v, n, k);

    cout << "The value of the indices where the target was found was : \n";
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}