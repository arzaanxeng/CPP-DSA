/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
// I learned how to access the indices of a string in a vector simultaneously using str[][] -> first box is for vector index , second is for string index
        for( int i = 0 ; i < strs[0].size() ; i++){
            for( int j = 1 ; j < strs.size() ; j++){
                if(strs[j][i] != strs[0][i]) return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};