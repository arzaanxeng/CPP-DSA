// Maximum Number of Consecutive Ones
#include<iostream>
using namespace std;

int main(void){
    vector<int>nums = {1,0,0,1,1,1,0,0,1,0,1,0,1,1,1,1,1,0,1,1};
    int count = 0 , ans = 0;
    for( int num : nums ){
        if(num==1){
            count++;
            ans = max(ans,count);
        }
        else count = 0;
    }
    cout<<"The maximum number of consective ones are : "<<ans;
    return 0;
}