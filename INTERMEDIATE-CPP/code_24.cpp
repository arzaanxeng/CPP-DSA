// SORT 0's and 1's
// NUMBER OF SUBARRAYS WHOSE SUM IS EQUIVALENT TO REQUIRED SUM 
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void sort_arr(vector<int>& nums){
    int l = 0 , r = nums.size() -1;
    while( l <= r){
        if(nums[l] == 1){
            swap(nums[l] , nums[r]);
            r--;
        }
        else if(nums[l] == 0) l++;
    }

    cout<<"\nAfter Sorting :";
    for (int i : nums) cout <<i<<" ";
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
    sort_arr(nums);
    
}
