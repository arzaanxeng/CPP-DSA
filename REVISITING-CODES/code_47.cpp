// Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxSumSubarr(vector<int>& nums ){
    int sum = 0 , ans = INT_MIN;
    for( int i : nums){
        sum += i;
        ans = max( ans , sum );
        if( sum < 0 ) sum = 0;
    }
    return ans;
}

int main(void){
    int n ;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the value of " << (i + 1) << " element : ";
        cin >> v[i];
    }
    int ans = maxSumSubarr( v);
    cout<<"\nThe max sum of a subarr is : "<<ans;
}