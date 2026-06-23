#include<iostream>
#include<vector>
using namespace std;

void all_subarr_sum(vector<int>& v){
    int n = v.size();
    int ans = 0;
    for(int i = 0 ; i< n ; i++){
        int sum = 0 ;
        for(int j = i ; j<n ; j++){
            sum += v[j];
            ans = max(sum,ans);
        }
    }
    cout<<"The maximum sum is : "<<ans;
}


int main(void){
    int n;
    cout<<"Enter the value of size of the array: ";
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
       cout<<"Enter the "<<(i+1)<<" value :";
       cin>>v[i];
    }
    all_subarr_sum(v);
    return 0;
}