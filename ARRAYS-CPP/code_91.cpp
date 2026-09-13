#include<iostream>
using namespace std;

class Solution {
public:
    bool isPossible(const vector<int>& bloomDay, int m, int k, int mid) {
        int count = 0;
        int bouquets = 0;
        for (int bloom : bloomDay) {
            if (bloom <= mid) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        // Early exit and overflow protection
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;
        
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (isPossible(bloomDay, m, k, mid)) {
                ans = mid;
                r = mid - 1; // Try to find a smaller valid day
            } else {
                l = mid + 1; // Mid is too small, need more days
            }
        }
        return ans;
    }
};