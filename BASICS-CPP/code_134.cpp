#include<iostream>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans;
        for( int i = 0 ; i < s.size() ; i++ ){
            if( s[i] == ' ' ){
                reverse(word.begin(),word.end());
                ans += word;
                ans += " ";
                word.clear();
            }
            else word += s[i];
        }
        reverse(word.begin(),word.end());
        ans+=word;
        return ans;
    }
};