#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int count_target_pair_sum_subarr(vector<int>& v , int target){
    unordered_map<int,int>m;
    int n = v.size();
    int count = 0 , pref = 0;
    for(int i = 0 ; i<n ; i++){
        pref += v[i];
        if(pref == target) count++;
        if(m.find(pref - target) != m.end()) {
        count += m[pref-target];
        m[pref] ++;
        }
        else m[pref] = 1;
    }
    return count;
}


int main(void){
    int target , n;
    cout<<"Enter the value of size of the array: ";
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
       cout<<"Enter the "<<(i+1)<<" value :";
       cin>>v[i];
    }
    cout<<"Enter the value of target sum :";
    cin>>target;

    int ans =  count_target_pair_sum_subarr(v,target);
    cout<<"\nThe number of pairs are :"<<ans;
}