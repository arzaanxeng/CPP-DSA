// Max Sum of Sub-array with size = K

#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int>nums = {1,7,-5,3,8,11,-6,2};
    int n = nums.size() ;
    int k;
    cout<<"Enter the size of SubArray : ";
    cin>>k;
    if( k > n ){
        cout<<"Enter a valid number !";
        return 0;
    }
    int ans = INT_MIN , sum = 0 ;
    // Forming the Smaller Window
    for( int i = 0 ; i < k ; i++) sum += nums[i];
    ans = max(ans,sum);
    for( int i = k ; i < n ; i++){
        sum += nums[i];
        sum -= nums[i-k];
        ans = max(ans,sum);
    }
    cout<<"The maximum sum is : "<<ans;
    return 0;
}



