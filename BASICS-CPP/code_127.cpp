#include<iostream>
#include<map>
#include<vector>
using namespace std;
/*class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> m;
        for (int num : nums) {
            m[num]++;
        }
        // Using map instead of removing elements from nums as it would make code slower 
        vector<int> ans;
        while (!m.empty()) {
            vector<int> keys_to_erase;
            for (auto &[val, count] : m) {
                ans.push_back(val); // Push distinct element in ascending order
                count--;            
                if (count == 0) {
                    keys_to_erase.push_back(val);
                }
            }
            // Remove elements whose frequencies have reached 0
            for (int key : keys_to_erase) {
                m.erase(key);
            }
            // Exit when m.size() == 0
        }
        return ans;
    }
};
*/