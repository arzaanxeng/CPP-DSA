// Max Sum of Sub-array with size = K

#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>nums = {1,7,-5,8,4};
    int n = nums.size() ;
    int k;
    cout<<"Enter the size of SubArray : ";
    cin>>k;
    int sum = 0 , ans = INT_MIN;
    for( int l = 0 ; l < n  ; l++){
        for( int r = l ; r < n ; r++){
            sum+= nums[r];
            if( r-l+1 == k )  ans = max(ans,sum);
        }
        sum = 0;
    }
    cout<<"The maximum sum is : "<<ans;
    return 0;
}



