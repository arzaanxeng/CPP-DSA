// Subsequences with SUM = K (Can pick the same element more than once)
#include<iostream>
#include<vector>
using namespace std;

void f(int idx, int currentSum, int target,vector<int>& nums, vector<int>& path) {

    // If the current sum reaches the target, print the subsequence.
    if (currentSum == target) {
        for (int el : path) cout << el << "  ";
        cout<<endl;
        return;
    }
    if (currentSum > target) return;
    // Stop if we have processed all elements.
    if (idx == nums.size()) return;

    // Take the current element and stay there.
    path.push_back(nums[idx]);
    f(idx, currentSum + nums[idx], target, nums, path);
    path.pop_back();

    // Do not take the current element.
    f(idx + 1, currentSum, target, nums, path);
}

int main() {
    vector<int> nums = {1, 4, 7, 2, 9, 5, 3};

    int target;
    cout << "Enter the target SUM: ";
    cin >> target;

    vector<int> path;
    f(0, 0, target, nums, path);

    return 0;
}
