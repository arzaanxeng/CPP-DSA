// 13. Roman to Integer
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    int romanValue(char c){
        if( c == 'I') return 1;
        if( c == 'V') return 5;
        if( c == 'X') return 10;
        if( c == 'L') return 50;
        if( c == 'C') return 100;
        if( c == 'D') return 500;
        if( c == 'M') return 1000;
        return 0;
    }


    int romanToInt(string s) {
        int ans = romanValue(s[0]);

        for( int i = 1 ; i < s.size() ; i++){
            if(romanValue(s[i]) <= romanValue(s[i-1])) ans += romanValue(s[i]);
            else ans += (romanValue(s[i]) - 2*romanValue(s[i-1]));
        }
        return ans;
    }
};