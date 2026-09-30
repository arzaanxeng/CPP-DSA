// 3. Longest Substring Without Repeating Characters
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        unordered_map<char, int> m;

        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;

            while (m[s[i]] > 1) {
                m[s[l]]--;

                if (m[s[l]] == 0)
                    m.erase(s[l]);

                l++;
            }
            ans = max(ans,(int)m.size());
        }
        return ans;
    }
};