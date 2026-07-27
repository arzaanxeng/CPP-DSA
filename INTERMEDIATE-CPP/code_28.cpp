// Find number of distinct elments in an array in TC :- 0(N)
/*
Constraints :
0 <= A[i] <= n-1
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void count_distinct(vector<int>& nums) {
    int n = nums.size();
    int i = 0;

    // Cyclic sort: Place each element x at index x if possible
    while (i < n) {
        int correct_index = nums[i];
        // If nums[i] is valid and not already at its correct spot
        if (correct_index >= 0 && correct_index < n && nums[i] != nums[correct_index]) swap(nums[i], nums[correct_index]);
        else i++;
    }
    // Count how many indices got their matching element
    int count = 0;
    for (int j = 0; j < n; j++) if (nums[j] == j) count++;
    cout << "The total number of distinct elements is : " << count << endl;
}

int main(void) {
    int n;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    count_distinct(nums);
}