// Find Single Number 2
#include <iostream>
#include <vector>
#include <unordered_map>
#include <bitset>
using namespace std;

void SingleNumber2(vector<int>& nums){
    unordered_map<int,int>m;
    for( int i : nums) m[i]++;
    for( auto it = m.begin() ; it != m.end() ; ++it){
        if( it->second == 1) cout<<"The culprit is : "<<it->first<<endl;
    }
}

int main(void){
    vector<int>v = {7,2,2,2,13,3,3,3,8,8,8,9,9,9,5,5,5}; // The id cannot be zero
    SingleNumber2(v);
    return 0;
}