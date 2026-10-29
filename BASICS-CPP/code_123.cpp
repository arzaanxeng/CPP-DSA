
#include<iostream>
#include<vector>
#include<map>
using namespace std;

// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         map<int, int> m;
//         for (int num : arr1) m[num]++;
//         vector<int> ans;
//         for (int num : arr2) {
//             while (m[num] > 0) {
//                 ans.push_back(num);
//                 m[num]--; 
//             }
//             m.erase(num);
//         }  
//         // Append the remaining elements (already sorted by map keys)
//         for (auto const& [val, count] : m) {
//             for (int i = 0; i < count; i++) {
//                 ans.push_back(val);
//             }
//         }
//         return ans; 
//     }
// };