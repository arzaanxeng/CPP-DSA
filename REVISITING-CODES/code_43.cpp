#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_first(const vector<int>& nums, int k) {
    int n = nums.size();
    int l = 0, r = n - 1, ans = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == k) {
            ans = m;
            r = m - 1;         
        } else if (nums[m] > k) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return ans;
}


int find_last(const vector<int>& nums, int k) {
    int n = nums.size();
    int l = 0, r = n - 1, ans = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == k) {
            ans = m;
            l = m + 1;         
        } else if (nums[m] > k) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return ans;
}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (they will be sorted automatically):\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // Make sure the array is sorted
    sort(nums.begin(), nums.end());

    cout << "Enter the target value: ";
    cin >> k;

    int first = find_first(nums, k);
    int last  = find_last(nums, k);

    if (first != -1) cout << "Yes, the target appears " << (last - first + 1) << " time(s).\n";
    else cout << "No, the target does not exist in the array.\n";
    

    return 0;
}