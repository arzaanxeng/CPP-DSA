// COUNT SORT
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int> nums = {3,8,6,2,5,4,5,7,2,4,1,2,8,0,9,9,7,5,6,4}; //. 0 <= nums[i] <= 9
    int freq[10] = {0};
    for( int i = 0 ; i < nums.size() ; i++) freq[nums[i]]++; // Stored the frequency of each element
    for( int i = 9 ; i >= 0 ; i--){
        while( freq[i] > 0 ){
            cout<<i<<" ";
            freq[i]--;
        }
    }
    return 0;
}