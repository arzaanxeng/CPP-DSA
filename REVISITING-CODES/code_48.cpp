// Given an integer array nums, find the subarray with the largest sum, and return that subarray

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

void maxSumSubarr(vector<int>& nums ){
    int sum = 0 , ans = INT_MIN , start = 0 , end = 0;
    int tempStart = 0; 

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        // Only update best boundaries when a new maximum sum is achieved
        if (sum > ans) {
            ans = sum;
            start = tempStart; // Starting Pointer
            end = i;           // Ending Pointer - Will be at the same place as the looping index
        }

        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;  // Moves to the next suarray 
        }
    }

    cout<<"The subarray with maximum sum of "<<ans<<" is : \n";
    for( int i = start ; i<= end ; i++ ){
        cout<<nums[i]<<" ";
    }

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
    maxSumSubarr( v);
    return 0;
}