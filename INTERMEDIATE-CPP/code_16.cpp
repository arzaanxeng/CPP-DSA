#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void binary_sum(const vector<int>& nums, int x) {
    int n = nums.size();
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] > x) {
            ans = m;    // Candidate found, try searching left for an earlier one
            r = m - 1;
        } else {
            l = m + 1;  // Element is <= x, move right
        }
    }

    int count = (ans == -1) ? 0 : (n - ans);

    cout << "\nThe number of values > " << x << " is : " << count << "\n";
}

int main(void) {
    cout << "\nDISCLAIMER : Finding count of numbers > query value\n\n";
    
    int n, q;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    cout << "Enter the number of queries : ";
    cin >> q;

    for (int i = 0; i < q; i++) {
        int query_num;
        cout << "Enter the value of query number " << (i + 1) << " : ";
        cin >> query_num;
        binary_sum(nums, query_num);
    }

    return 0;
}