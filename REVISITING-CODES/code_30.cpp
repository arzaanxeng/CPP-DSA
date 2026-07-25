// Longest Subarray with no duplicates -> Asked in GOOGLE
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void longest_distinct_subarr(vector<int>& nums) {
    unordered_map<int, int> m;
    int max_length = 0, l = 0;

    for (int r = 0; r < nums.size(); r++) {
        m[nums[r]]++;
        while (m[nums[r]] > 1) {
            m[nums[l]]--;
            if (m[nums[l]] == 0) m.erase(nums[l]);
            l++;
        }
        max_length = max(max_length, r - l + 1);
    }
    cout << "The longest subarray with no duplicates is of size : " << max_length << endl;
}

int main(void){
    int n ;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    longest_distinct_subarr(v);
}