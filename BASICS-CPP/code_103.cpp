// Sorting the vector base on last digit
#include<iostream>
#include<vector>
using namespace std;

bool cmp( int a , int b ){
    if((a%10) != (b%10)) if( (a%10) < (b%10)) return true;
    return false;
}

int main(void){
    vector<int> nums = {4,55,11,2,33,6,57,8,29,10,11,111};
    sort(nums.begin() , nums.end() , cmp );
    for( int el : nums ) cout<<el<<" ";
}