#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true; // No info was given abt this though !
        int j = 0;
        for( int i = 0 ; i < t.size() ; i++){
            if(s[j] == t[i]) j++;
            if( j == s.size() ) return true;
        }
        return j == s.size() ;
    }
};