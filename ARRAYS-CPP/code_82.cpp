/*
Given a string s, find the length of the longest substring without duplicate characters.

Example :
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

*/

#include<iostream>
#include<set>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int>unique;
        int l = 0;
        int ans = 0;
        for( int r = 0 ; r < s.size() ; r++ ){
            while(unique.find(s[r]) != unique.end()){
                unique.erase(s[l]);
                l++;
            }
            unique.insert(s[r]);
            ans = max( ans , r - l + 1);
        }
        return ans;
    }
};