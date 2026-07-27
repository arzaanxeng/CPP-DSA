// MAXIMUM SUBARRAY SUM IN AN ARRAY
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int  max_subarr_sum( vector<int>& nums){
    int ans = INT_MIN , sum = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        sum += nums[i] ;
        ans = max(ans , sum);
        if( sum < 0 ) sum = 0;
    }
    return ans;
}

int main(void) {
    int n ;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    int ans = max_subarr_sum(nums);
    cout<<"The answer is : "<<ans;
}