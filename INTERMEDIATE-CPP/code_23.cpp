// NUMBER OF SUBARRAYS WHOSE SUM IS EQUIVALENT TO REQUIRED SUM 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int sub_array_sum_zero(const vector<int>& nums , int target ) {
    unordered_map<int, int> m;
    int count = 0 , n = nums.size() , sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += nums[i];
        if(sum == target ) count++;
        if(m.find(sum - target) != m.end()) count += m[sum - target];
        m[sum]++;
    }
    return count;
}

int main(void) {
    int n , k ;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout<<"\nEnter the value of required sum : ";
    cin>>k;
    int ans = sub_array_sum_zero(nums , k);
    cout << "\nThe number of subarrays with sum 0 is : " << ans << endl;
}