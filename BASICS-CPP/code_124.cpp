#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // Sort the array to bring elements close to each other
        sort(arr.begin(), arr.end());
        int min_diff = INT_MAX;
        for (int i = 1; i < arr.size(); i++) {
            min_diff = min(min_diff, arr[i] - arr[i - 1]);
        }
        vector<vector<int>> ans;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == min_diff) {
        // Push back the results in ascending order {arr[i-1],arr[i]}
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};