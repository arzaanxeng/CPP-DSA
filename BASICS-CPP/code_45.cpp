// Rotated String

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;

        string rotatedString = "";
        for( int i = 0 ; i < s.size() ; i++){
            rotatedString = s.substr(i) + s.substr(0 , i);
            if( rotatedString == goal ) return true;
        }
        return false;
    }
};

