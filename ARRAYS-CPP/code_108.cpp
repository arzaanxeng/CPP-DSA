#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        // Lets remove leading Spaces
        int i = 0;
        while( i < s.size() && s[i] == ' ') i++;
        if( i == s.size() ) return 0;

        // Verifying the sign
        long long sign = 1;
        if(s[i] == '+'){
            sign = 1;
            i++;
        }
        else if(s[i] == '-'){
            sign = -1;
            i++;
        }

        // Include the sign at last 
        long long ans = 0;
        int num;
        
        while(i < s.size() && isdigit(s[i])){
            num = (s[i] - '0'); // char to int 
            if( ans > (INT_MAX-num)/10 ){
                if(sign==1) return INT_MAX;
                else return INT_MIN;
            }
            else ans =  ans*10 + num;
            i++;
        }
        return ans*sign;
    }
};