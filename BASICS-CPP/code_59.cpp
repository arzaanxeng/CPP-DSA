// Find Single Number 2
#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int checkBit(int num, int j) {
    return (num & (1 << j)) != 0 ? 1 : 0;
}

int setBit( int ans , int j){
    return ans | (1 << j);
}

int SingleNumber(vector<int>& nums){
    int ans = 0;
    int n = nums.size();
    int k = 32;
    for( int j = 0 ; j < k ; j++){
        int sum = 0;
        for( int i = 0 ; i < n ; i++){
            if(checkBit(nums[i] , j)){
                sum++;
            }
        }
        if( sum%3 != 0){
            ans = setBit(ans , j);
        }
    }
    return ans;
}

int main(void){
    vector<int>v = {7,2,2,2,3,3,3,8,8,8,9,9,9,5,5,5}; // The id cannot be zero
    int ans = SingleNumber(v);
    cout<<"The imposter is : "<<ans;
}