#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// EXTRACTNG MAXIMUM SUM OF A SUBARRAY USING OPTIMAL SOLUTION !!!

int main(){
    vector<int>v = {7,8,-100,8,9,20,50,-500,160,-70,150};
    int n = v.size();
    int ans = INT_MIN , sum = 0 , l = -1 , r = -1 , start = -1;
    for(int i = 0 ; i < n ; i++){
        if(sum<0) {
        sum = 0;
        start = i;
        }
        sum+= v[i];
        if(sum>ans){
        l = start;
        ans = sum;
        r = i;
        } 
    }

    cout<<"\nThe maximum sum is : "<<ans;
    cout<<endl;
    for(int i = l ; i <= r ; i++){
        cout<<v[i]<<" ";
    }

}