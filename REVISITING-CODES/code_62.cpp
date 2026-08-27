/*
A bit flip of a number x is choosing a bit in the binary representation of x and flipping it from either 0 to 1 or 1 to 0.

For example, for x = 7, the binary representation is 111 and we may choose any bit (including any leading zeros not shown)
and flip it. We can flip the first bit from the right to get 110, flip the second bit from the right to get 101, flip the 
fifth bit from the right (a leading zero) to get 10111, etc.

Given two integers start and goal, return the minimum number of bit flips to convert start to goal.
*/

#include <iostream>
using namespace std;
/* My Approach 
class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32> binarystart(start);
        bitset<32> binarygoal(goal);
        int count = 0;

        for( int i = 0 ; i < binarystart.size() ; i++){
            int mask = 1<<i;
            if(binarystart[i] != binarygoal[i]){
                count++;
            }
        }
        return count;
    }
};
*/

// Optimal Approach using the concept of removal of Rightmost bit ( It can also be used to count the number of set Bits );

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = start^goal;
        int count = 0;
        while( n != 0 ){
            n = n&(n-1);
            count++;
        }
        return count;
    }
};