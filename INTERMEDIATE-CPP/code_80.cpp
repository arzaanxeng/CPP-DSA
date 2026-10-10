// Subsequences with SUM + K
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

void f( int idx , int k , int sum , vector<int>& nums , vector<int>& path ){
    if(  k == sum  ){
        for( int el : path ) cout<<el<<" ";
        cout<<endl;
        return;
    }

    if( idx == nums.size() ) return;

    // Take The Element
    path.push_back(nums[idx]);
    f(idx+1,k+nums[idx],sum,nums,path);
    path.pop_back();

    // Don't take the Element
    f(idx+1,k,sum,nums,path);
}

int main(void){
    vector<int>nums = {1,4,8,3,2,6,7};
    int sum ;
    cout<<"Enter the required SUM : ";
    cin>>sum;
    vector<int>path;
    f(0,0,sum,nums,path);
}
