#include<iostream>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int maxLength = 0;
        for( int i = 0 ; i < n ; i++){
            // ODD Palindrome
            int left = i;
            int right = i;
            while(left >= 0 && right < n && s[left] == s[right]){
                if(right - left + 1 > maxLength){
                    maxLength = right - left + 1;
                    start = left;
                }
                // Moving from middle to edge
                left--;
                right++;
            }
            // Even Palindrome
            left = i;
            right = i+1;
            while(left >= 0 && right < n && s[left] == s[right]){
                if(right - left + 1 > maxLength){
                    maxLength = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
            
        }
        return s.substr(start,maxLength);
    }
};