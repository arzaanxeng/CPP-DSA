// Subsequences with SUM = K
#include<iostream>
#include<vector>
using namespace std;

void f(int idx , int currentSum , int Sum , vector<int>& path , vector<int>& nums  ){

    if( currentSum == Sum ){
        for( int el : path ) cout<<el<<" ";
        cout<<endl;
        return;
    }
    if( idx == nums.size()) return;

    // Pick the element
    path.push_back(nums[idx]);
    f(idx+1,currentSum+nums[idx],Sum,path,nums);
    path.pop_back();

    // Do not pick
    f(idx+1,currentSum,Sum,path,nums);
}

int main(void){
    vector<int> nums = {2,5,7,4,1,9};
    int sum ;
    cout<<"Enter the required Sum : ";
    cin>>sum;
    vector<int> path;
    f(0,0,sum,path,nums);
}