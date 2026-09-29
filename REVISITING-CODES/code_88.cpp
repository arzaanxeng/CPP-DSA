// Cyclic Sorting 
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int>nums = {7,6,7,8,0,2,4,6,3,1,5};
    // All integers are from 0 to N-1 where N is number of elements
    int actualIndex = -1;
    for( int i = 0 ; i < nums.size() ; i++){
        actualIndex = nums[i];
        if( nums[actualIndex] != nums[i]){
            swap(nums[i] , nums[actualIndex]);
            i--;
        }
    }
    for( int num : nums ) cout<<num<<"  ";
    return 0;
}