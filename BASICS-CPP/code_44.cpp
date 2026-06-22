#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool search_sub_arr_target(vector<int>& v , int target ){
    unordered_set<int>s;
    int n = v.size();

    int pref = 0;
    for(int i = 0 ; i<n ; i++){
        pref += v[i];
        if(pref == target) return true;
        // p[r] - p[l-1] = target 
        //
        else if(s.find(target - pref) != s.end())return true;
        else  s.insert(pref);
    }
    return false;
}

int main(void){
    int n , target;
    cout<<"Enter the value of size of the array: ";
    cin>>n;
    if(n==1)return -1;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
       cout<<"Enter the "<<(i+1)<<" value :";
       cin>>v[i];
    }
    cout<<"Enter the value of target sum :";
    cin>>target;

    bool ans = search_sub_arr_target(v , target);
    if(ans) cout<<"YES";
    else cout<<"NO";
}