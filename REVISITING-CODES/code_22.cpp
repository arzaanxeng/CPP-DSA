// Sub-arrays with sum = 0
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool subarr_zero(vector<int>& v){
    // Prefix_Sum_Array
    int n = v.size();
    vector<int>pref(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i ++){
        sum += v[i];
        pref[i] = sum;
    }

    unordered_set<int>s;
    for(int i = 0 ; i < n ; i++){
        if(pref[i] == 0 ||  s.find(pref[i]) != s.end() ) return true;
        s.insert(pref[i]);
    }
    return false;
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
    bool ans =  subarr_zero(v);
    if(ans){
        cout<<"Yes , the array contains the sub arrays with sum = 0";
    }
    else{
        cout<<"No , the array does not contain any subarray whose sum is 0";
    }

}
