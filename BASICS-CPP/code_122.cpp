#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // The condition is valid such that the num%2 == 0
        unordered_set<int>seen;
        for( int num : arr){
            if( (seen.find(2*num) != seen.end() ) || (num%2==0 && seen.find(num/2) != seen.end())) return true;
            seen.insert(num);
        }
        return false;
    }
};