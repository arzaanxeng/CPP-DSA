// Find Single Number 3
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int checkBit(int num, int j) {
    return (num & (1 << j)) != 0 ? 1 : 0;
}

void SingleNumber2(vector<int>& nums){
    int pos = -1 , xor_vec = 0;
    for( int i : nums) xor_vec ^= i;

    for( int j = 0 ; j < 32 ; j++){
        if(checkBit(xor_vec , j)){
            pos = j; // found the position where the bit is different !
            break;
        }
    }
    int group1 = 0 , group2 = 0;
    for( int i : nums){
        if(checkBit( i , pos)) group1 ^= i;
        else group2 ^= i;
    }
    cout<<"The culprits are : "<<group1<<" and "<<group2<<endl;
}

int main(void){
    vector<int>v = {10,2,1,1,4,4,5,5,6,6,7,7,8,8}; // The id cannot be zero
    SingleNumber2(v);
    return 0;
}