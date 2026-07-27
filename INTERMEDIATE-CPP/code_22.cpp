// NUMBER OF SUBARRAYS WHOSE SUM IS EQUIVALENT TO ZERO
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int sub_array_sum_zero(const vector<int>& nums) {
    unordered_map<int, int> m;
    int count = 0 , n = nums.size() , sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += nums[i];
        if(sum == 0) count++;
        else if(m.find(sum) != m.end()) count += m[sum];
        m[sum]++;
    }
    return count;
}

int main(void) {
    int n;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }

    int ans = sub_array_sum_zero(nums);
    cout << "\nThe number of subarrays with sum 0 is : " << ans << endl;
}