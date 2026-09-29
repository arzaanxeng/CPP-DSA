// Shortest Subarray with SUM > X
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int> nums = {1,2,2,4,5,3,3,4};
    int x;
    cout<<"Enter the value of required Sum : ";
    cin>>x;
    int l = 0 , sum = 0 , ans = INT_MAX;
    for( int r = 0 ; r < nums.size() ; r++){
        sum += nums[r];
        while( sum > x ){
            ans = min(ans,r-l+1);
            sum -= nums[l];
            l++;
        }
    }
    cout<<"The minimum length of Subarray with Sum > "<<x<<" : "<<ans;
}