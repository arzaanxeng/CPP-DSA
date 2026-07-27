// Shortest Subarray with sum > x
#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

// NOTE: This standard sliding window approach works for NON-NEGATIVE (>= 0) numbers.
void min_length_subarr_sum_greaterthan_x(const vector<int>& nums, int x) {
    int n = nums.size();
    int l = 0;
    int sum = 0;
    int ans = INT_MAX;

    for (int r = 0; r < n; r++) {
        sum += nums[r];

        // Shrink window from the left as long as the sum is > x
        while (sum > x) {
            ans = min(ans, r - l + 1);
            sum -= nums[l];
            l++;
        }
    }
    
    if (ans == INT_MAX) {
        cout << "\nNo subarray found with sum > " << x << endl;
    } else {
        cout << "\nThe minimum length of a subarray with sum > " << x << " is : " << ans << endl;
    }
}

int main(void) {
    int n, k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout << "\nEnter the required sum threshold (x) : ";
    cin >> k;
    min_length_subarr_sum_greaterthan_x(nums, k);
    return 0;
}