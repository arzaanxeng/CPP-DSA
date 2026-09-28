// Longest Subarray with Sum < k provided nums[i] >= 0
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(void){
    unordered_map<int,int>m;
    vector<char>nums = {1,2,1,3,4,2,5,5,5};
    int n = nums.size();
    int x ;
    cout<<"Enter the value of required SUM : ";
    cin>>x;
    int maxlen = 0 , l = 0 , sum = 0;
    for( int r = 0 ; r < n ; r++){
        sum += nums[r];
        while( sum >= x ){
            sum -= nums[l];
            l++;
        }
        maxlen = max(maxlen, r-l+1);
    }
    cout<<"\nThe longest subarray with sum < "<<x<<" is of size : "<<maxlen;
}