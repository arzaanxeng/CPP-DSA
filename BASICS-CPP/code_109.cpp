
#include<iostream>
#include<unordered_set>
using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;       
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n); 
            long long num = 0; 
            while (n != 0) {
                long long rem = n % 10;
                num += rem * rem;
                n = n / 10;
            }
            n = num; 
        }
        return n == 1;
    }
};