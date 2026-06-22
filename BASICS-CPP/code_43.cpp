#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool is_sub_arr_null(vector<int>& v ){
    unordered_set<int>s;
    int n = v.size();
    int pref = 0;
    for(int i = 0 ; i<n ; i++){
        pref += v[i];
        if(pref == 0) return true;
        else if(s.find(pref) != s.end())return true;
        else  s.insert(pref);
    }
    return false;
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

    bool ans = is_sub_arr_null(v);
    if(ans) cout<<"YES";
    else cout<<"NO";
}