// Sorting the vector base on last digit ( Absolute Value )
#include<iostream>
#include<vector>
using namespace std;
// If different sort in asc
// If same in magniture sort in desc
bool cmp( int a , int b ){
    if(abs(a)%10 != abs(b)%10 ) return abs(a%10) < abs(b%10);
    else return a > b ;
}

int main(void){
    vector<int> nums = {-4,-55,4,11,2,33,6,55,3,29,-10,11,111};
    sort(nums.begin() , nums.end() , cmp );
    for( int el : nums ) cout<<el<<" ";
}