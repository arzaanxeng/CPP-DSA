// Union of two arrays
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(void){
    unordered_set<int>s;
    int nums1[] = {1,3,2,6,5,4,7}; // n = 7
    int n = sizeof(nums1)/sizeof(nums1[0]);
    int nums2[] = {11,9,12,8,7,4}; // m = 6
    int m = sizeof(nums2)/sizeof(nums2[0]);
    for(int i = 0 ; i < n ; i++){
        s.insert(nums1[i]);
    }
    for(int i = 0 ; i < m ; i++){
        s.insert(nums2[i]);
    }

    vector<int>v(s.begin() , s.end());
    sort(v.begin() , v.end());
    for (const auto& i : v) {
        std::cout << i << " ";
    }
}