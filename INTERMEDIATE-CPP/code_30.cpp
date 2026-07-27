// MAX subarray sum within a closed limit 'k'
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void max_sum_subarr( vector<int>& nums , int size){
    int n = nums.size();
    if (size <= 0 || size > n) {
        cout << "\nInvalid window size!" << endl;
        return;
    }
    int sum = 0 , ans = 0;
    // Creating the first window
    for( int i = 0 ; i < size ; i++) sum += nums[i];
    ans = sum;
    // Moving to the consecutive windows 
    for( int i = size ; i < n ; i++){
        sum += nums[i];
        sum -= nums[i-size];
        ans = max(ans,sum);
    }
    cout<<"\nThe maximum sum containing sub array of fixed size "<<size<<" is : "<<ans;
}

int main(void) {
    int n , k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    cout<<"\nEnter the size of sub-array : ";
    cin>>k;
    max_sum_subarr( nums , k);
    return 0;
}