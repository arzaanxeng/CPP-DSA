// Number of Sub-arrays with sum = target
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void count_subarr(vector<int>& nums , int target){
    int n = nums.size();
    vector<int>pref(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i ++){
        sum += nums[i];
        pref[i] = sum;
    }
    unordered_map<int,int>m;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(pref[i] == target){
            ans++;
        }
        if(m.find(pref[i] - target) != m.end()){
            ans += m[pref[i] - target];
        }
        m[pref[i]]++;
    }
    cout<<"\nThe total number of subarrays with sum eqquivalent to target are : "<<ans;
}

int main(void){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    int t;
    cout<<"\nEnter the value of target sum : ";
    cin>>t;

    count_subarr(v,t);
    return 0;
}
