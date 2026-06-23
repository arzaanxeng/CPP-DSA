#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;

void all_subarr_sum(vector<int>& v , int k){
    int n = v.size();
    int ans = 0 , sum = 0;
    for(int i = 0 ; i<k ; i++){
        sum += v[i];
    }
    ans = sum;
    for(int i = k ; i < n ; i++){
        sum+= v[i];
        sum -= v[i-k];
        ans = max(sum,ans);
    }
    cout<<"The maximum sum is : "<<ans; 
}

int main(void){
    int n , k;
    cout<<"Enter the value of size of the array: ";
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
       cout<<"Enter the "<<(i+1)<<" value :";
       cin>>v[i];
    }
    cout<<"Enter the value of size of the sub arr :";
    cin>>k;
    if( k>n || k==0){
        cout<<"The sub array cannot be greater than the size of actual array or non existent.";
        return 0;
    }
    all_subarr_sum(v , k);
    return 0;
}