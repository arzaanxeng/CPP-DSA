// Valid Anagram

#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m1;
        for( int i = 0 ; i < s.size() ; i++) m1[s[i]]++;
        for( int i = 0 ; i < t.size() ; i++) {
            m1[t[i]]--;
            if(m1[t[i]] == 0) m1.erase(t[i]);
        }
        if( m1.empty() )return true;
        return false;
    }
};