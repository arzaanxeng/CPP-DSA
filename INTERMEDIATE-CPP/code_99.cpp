#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        // Solving it with map is very easy but won't satisfy the conditions
        // But if the arr is sorted so --> O can use two pointers!
        // If sum[l] + sum[r] > target --> r-- and vice verca , reduces the size of window 
        int l = 0;
        int r = numbers.size()-1;
        // Same index is not valid
        vector<int>ans;
        while( l < r ){
            if(numbers[l] + numbers[r] == target){
                ans.push_back(l+1);
                ans.push_back(r+1);
                return ans;
            }
            else if(numbers[l] + numbers[r] > target) r--;
            else l++;
        }
        return ans;
    }
};