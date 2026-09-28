// Sum of Sub-arrays 

#include<iostream>
#include<vector>
using namespace std;
// Optimal Approach -> CarryForward Technique

int main(void){
    vector<int>nums = {1,7,-5,8,4};
    int n = nums.size() ;
    int sum = 0;
    for( int l = 0 ; l < n ; l++){
        for( int r = l ; r < n ; r++){
            sum +=  nums[r];
            cout<<sum<<" ";
        }
        sum = 0;
        cout<<endl;
    }
    return 0;
}


