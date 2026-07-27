// Longest Sub-Array with sum < k
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// NOTE: This two-pointer sliding window approach works when array elements are NON-NEGATIVE (>= 0)
void max_length_subarr_sum_less_than_k(vector<int>& nums , int k){
    int l = 0  , max_length = 0 , sum = 0 ;
    for(int r = 0 ; r < nums.size() ; r++){
        sum += nums[r];
        while( sum >= k){
            sum -= nums[l];
            l++;
        }
        max_length = max( max_length , r-l+1);
    }
    cout<<"The maximum length of the sub-array with sum < "<<k<<" is :"<<max_length;
}

int main(void) {
    int n, k;

    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout << "\nEnter the required sum : ";
    cin >> k;
    max_length_subarr_sum_less_than_k(nums, k);

    return 0;
}