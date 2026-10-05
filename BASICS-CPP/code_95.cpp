#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for( int i = n-1 ; i >= 0  ; i--){
            if( digits[i] != 9 && i == n-1){
                digits[i] += 1;
                return digits;
            }
            else if ( digits[i] == 9 && i != 0 ){
                digits[i] = 0;
            }
            else if ( digits[i] == 9 && i == 0 ){
                digits[i] = 0;
                digits.insert(digits.begin() , 1);
            }
            else if( digits[i] != 9){
                digits[i] += 1;
                return digits;
            }
        }
        return digits ;
    }
};