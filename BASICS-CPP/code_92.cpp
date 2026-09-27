// Find The Difference 

#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int>m;

        for (int i = 0; i < s.size(); i++) m[s[i]]++;
        
        for (int j = 0; j < t.size(); j++) {
            m[t[j]]--;
            if (m[t[j]] < 0) {
                return t[j];
            }
        }

        return ' '; 
    }
};