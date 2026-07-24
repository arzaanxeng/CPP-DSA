// Sub-arrays with sum = target
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool subarr_zero(vector<int>& v , int target ){
    // Prefix_Sum_Array
    int n = v.size();
    vector<int>pref(n);
    int sum = 0;
    for(int i = 0 ; i < n ; i ++){
        sum += v[i];
        pref[i] = sum;
    }
    // Or I can just simply not use it !

    unordered_set<int>s;
    for(int i = 0 ; i < n ; i++){
        if(pref[i] == target ||  s.find(pref[i] - target) != s.end() ) return true;
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
    int t;
    cout<<"\nEnter the value of target sum : ";
    cin>>t;

    bool ans =  subarr_zero(v , t);
    if(ans){
        cout<<"Yes , the array contains the sub arrays with sum = "<<t;
    }
    else{
        cout<<"No , the array does not contain any subarray whose sum is "<<t;
    }

}
