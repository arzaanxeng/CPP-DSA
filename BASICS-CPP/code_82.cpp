
#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if( s.size() != goal.size() ) return false;

        string reversedString = "";
        for( int i = 0 ; i < s.size() ; i++){
            reversedString = s.substr(i) + s.substr(0,i);
            if( reversedString == goal ) return true;
        }
        return false;
    }
};