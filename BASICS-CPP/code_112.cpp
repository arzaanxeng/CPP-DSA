/*class Solution {
public:
    bool checkPerfectNumber(int num) {
        // sum = n
        if( num == 1 ) return false;
        int div = 1 ;
        int ans = 0;
        while( div <= (num/2)){
            if(num%div == 0 ) ans += div;
            div++;
        }
        return ans == num;
    }
    // Find the soln woth 0(logN) Approach !!! 
};
*/