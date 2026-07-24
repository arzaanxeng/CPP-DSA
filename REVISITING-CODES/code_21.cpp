// TWO SUM FREQUENCY COUNT 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void two_sum_count(vector<int>& v , int target ){
    unordered_map<int,int>m;
    int val , ans = 0;
    for( int i : v){
        val = target - i;
        if(m.find(val) != m.end()) ans += m[val];
        m[i]++; 
    }
    cout<<"The number of duplets that would form the targeted sum is : "<<ans;
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
    cout<<"\nEnter the value of sum : ";
    cin>>t;

    two_sum_count(v , t);
}