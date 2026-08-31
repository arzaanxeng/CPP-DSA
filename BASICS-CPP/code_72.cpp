// Isomorphic Strings

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
//  No two characters may map to the same character, but a character may map to itself.
        unordered_map<char,char>m1;
        unordered_map<char,char>m2;
        if( s.size() != t.size() ) return false;

        for( int i = 0 ; i < s.size() ; i++){
            if(m1.find(s[i]) != m1.end()){
                if(m1[s[i]] != t[i]) return false;
            }
            else{
                if(m2.find(t[i])!= m2.end()) return false;
                m1[s[i]] = t[i];
                m2[t[i]] = s[i];
            }
        }
        return true;
    }
};