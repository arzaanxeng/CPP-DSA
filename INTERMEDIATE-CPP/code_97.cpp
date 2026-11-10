#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int longestSubstring(string s, int k) {
        if(s.size() < k) return 0;
        int freq[26] = {0};
        for( char c : s ) freq[c-'a']++; // Frequency array for characters in the string
        for( int i = 0 ; i < s.size() ; i++ ){
            // If frequency < k , then divide the string recursively till u get conditions satisfied for a valid longest Substring
            if(freq[s[i]-'a'] < k){
                int left = longestSubstring(s.substr(0,i), k);
                int right = longestSubstring(s.substr(i+1), k);
                return max(left,right); // 
            }
        }
        return s.size();
    }
};