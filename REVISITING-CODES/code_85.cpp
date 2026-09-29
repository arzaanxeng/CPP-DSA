// Maximum Subarray Sum
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int>nums = {-2,-8,-4,-9,-5,-3};
    int sum = 0 , ans = INT_MIN;
    for( int i = 0 ; i < nums.size() ; i++){
        if( sum < 0 ) sum = 0;
        sum += nums[i];
        ans = max(ans,sum);
    }
    cout<<"Sum is : "<<ans;
}