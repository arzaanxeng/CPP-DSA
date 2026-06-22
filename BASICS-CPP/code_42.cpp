#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int count_target_pair_sum(vector<int>& v , int t){
    unordered_map<int,int>m;
    int n = v.size();
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        int req = t - v[i];
        if(m.find(req) != m.end()){
            count += m[req];
        }
        if(m.find(v[i]) != m.end()){
            m[v[i]]++;
        }
        else{
            m[v[i]] = 1;
        }
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

    int ans =  count_target_pair_sum(v,target);
    cout<<"\nThe number of pairs are :"<<ans;
}