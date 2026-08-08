/*

Given two strings s and t, determine if they are isomorphic.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving 
the order of characters. No two characters may map to the same character, but a character may map to itself.

Example 1:

Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.

*/

/*
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> m;  
        unordered_map<char, char> rev; 

    for (int i = 0; i < s.size(); i++) {
        // Check if s[i] was already mapped
        if (m.find(s[i]) != m.end()) {
            if (m[s[i]] != t[i])
            return false;
        }

    else {
    // Check if t[i] is already being used by another
        if (rev.find(t[i]) != rev.end())return false;
        m[s[i]] = t[i];
        rev[t[i]] = s[i];
        }
    }
    return true;
    }
};
*/