#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void check_target_pair_sum(vector<int>& v , int t){
    unordered_set<int>s;
    int n = v.size();
    bool flag = false;
    for(int i = 0 ; i < n ; i++){
        int req = t - v[i];
        if(s.find(req) != s.end()){
            flag = true;
            break;
        }
        else{
            s.insert(v[i]);
        }
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
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

    check_target_pair_sum(v,target);
}