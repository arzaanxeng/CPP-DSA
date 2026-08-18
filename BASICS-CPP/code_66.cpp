// Valid Palindrome 

// Learned about a string method isalnum()

#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // string ans = "";
        // string true_ans = "";
        // for( int i = 0 ; i < s.size() ; i++) if(isalnum(s[i])) ans += tolower(s[i]);
        // for( int i = ans.size() - 1 ; i >= 0 ; i-- ) true_ans += ans[i];
        // return ans == true_ans;
        
        // TWO POINTER APPROACH
int l = 0, r = s.size() - 1;
    
    while (l < r) {
        while (l < r && !isalnum(s[l])) l++;
        while (l < r && !isalnum(s[r])) r--;
        if (tolower(s[l]) != tolower(s[r])) return false;
        l++;
        r--;
    }
        return true;
    }
// Time complexity is O(N) as no index is visted ever once again !!!
};