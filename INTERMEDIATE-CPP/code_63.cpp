/*
Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        
        for( int i = 0 ; i < s.size() ; i++){
            string new_str = "";
            new_str = s.substr(i) + s.substr(0,i);
            if( new_str != goal) continue;
            else return true;
        }
        return false;       
    }
};