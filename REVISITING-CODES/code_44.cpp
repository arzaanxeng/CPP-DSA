// TWO SUM COUNT
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void two_sum( vector<int> nums , int target ){
    unordered_map<int,int>m;
    int count = 0;
    for( int el : nums ){
        int req = target - el;
        if(m.find(req) != m.end()) count+= m[req];
        m[el]++;
    }
    cout<<"The number of pairs that would form the two sum are : "<<count;
}

int main(void){
    int n, k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of " << (i + 1) << " element : ";
        cin >> v[i];
    }
    cout<<"\nEnter the value of target sum : ";
    cin>>k;
    two_sum( v , k);
}