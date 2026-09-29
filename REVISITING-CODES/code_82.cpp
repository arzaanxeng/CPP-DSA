// Longest Subarray with no duplicates 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(void){
    vector<int> nums = {1,2,2,4,5,3,3,4};
    unordered_map<int,int>m;
    int l = 0 , ans = 0;
    for( int r = 0 ; r < nums.size() ; r++){
        m[nums[r]]++;
        while(m[nums[r]] > 1){
            m[nums[l]]--;
            if(m[nums[l]] == 0) m.erase(nums[l]);
            l++;
        }
        ans = max(ans , r-l+1);
    }
    cout<<"The max length of subArray is : "<<ans;
    return 0;
}