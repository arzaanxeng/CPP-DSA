# include<iostream>
# include<vector>
using namespace std;

class Solution {
public:
    
    bool isPossible(vector<int>& weights, int m, int days) {
        int days_contributed = 1;
        int total_weight = 0;

        for (int weight : weights) {
            if (total_weight + weight <= m) total_weight += weight;
            else {
                total_weight = weight;
                days_contributed++;
            }
        }

        return days_contributed <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = 0;
        int ans = -1;
        for (int weight : weights) r += weight;

        while (l <= r) {
            int m = l + (r - l) / 2;

            if (isPossible(weights, m, days)) {
                ans = m;
                r = m - 1;
            }
            else l = m + 1;  
        }
        return ans;
    }
};