// MAXIMUM SUBARRAY SUM IN AN ARRAY AND PRINTING THE SUBARRAY 
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void max_subarr_sum( vector<int>& nums){
    int ans = INT_MIN , sum = 0 , start = 0 , initial = 0, end = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        sum += nums[i] ;
        // Check wether the sum > ans or not ( WARNING : It should be done before setting array sum = 0 as in case of al negative number it could cause problems !)
        if( sum > ans){
            ans = sum ;
            initial = start;
            end = i;
        }
        // Reset sum if negative, and move start to next index
        if(sum < 0){
            sum = 0;
            start = i + 1 ;
        }
    }
    cout<<"\nThe maximum sum of a subarray is : "<<ans;
    cout<<endl;
    for(int i = initial ; i <= end ; i++){
        cout<<nums[i]<<"  ";
    }
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
    max_subarr_sum(nums);
}