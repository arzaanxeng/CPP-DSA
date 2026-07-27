// SORT 0's and 1's and 2's
// DNF ALGORITHM
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void sort_arr(vector<int>& nums){
    int l = 0 , i = 0, r = nums.size() -1;
    while( i <= r){
        if(nums[i] == 0){
            swap(nums[i] , nums[l]);
            i++;
            l++;
        }
        else if(nums[i] == 1){
            i++;
        }
        else{
            swap(nums[i] , nums[r]);
            r--;
        }
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
