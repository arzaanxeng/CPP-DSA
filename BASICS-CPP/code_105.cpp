// Sorting the vector base on last digit ( Absolute Value )
#include<iostream>
#include<vector>
using namespace std;
// If different sort in asc
// If same in magniture sort in desc
bool cmp( string& a , string& b ){
    if( a.size() != b.size() ) return a.size() < b.size(); // based upon SIZE
    return a < b; // Based on Lexicographical ascending order
}

int main(void){
    vector<string> nums = {"apple","banana","guava","cherry","pineapple","mango","kiwi","pomegranante"};
    sort(nums.begin() , nums.end() , cmp );
    for( string el : nums ) cout<<el<<" ";
}