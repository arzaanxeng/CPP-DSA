// Valid Perfect Square
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    
    int isSquareRoot(long long m , int num){
        if( m*m == num ) return 0;
        if( m*m > num )  return 1;
        return-1;
    }

    bool isPerfectSquare(int num) {
        if( num == 1 ) return true;
        int l = 0 , r = num/2;
        while( l <= r){
            long long m = l + (r-l)/2;
            if(isSquareRoot(m,num) == 0) return true;
            else if( isSquareRoot(m,num) == 1 ) r = m-1;
            else l = m+1;
        }
        return false;
    }
};