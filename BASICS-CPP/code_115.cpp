#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if( num == 0 ) return "0";
        bool IsNegative = false;
        if( num < 0 ){
            IsNegative = true;
            num = - num;
        }
        string ans = "";
        while(num>0){
            ans += to_string(num%7);
            num = num/7;
        }
        if(IsNegative) ans += "-";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};