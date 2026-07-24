// Finding the number of distinct elements
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void distinct_el(vector<int> &v){
    unordered_set<int>s;
    for(int i : v) s.insert(i);
    cout<<"The number of distinct elements are : "<<s.size()<<" \n\n";
    for(int i : s){
        cout<<i<< " ";
    }
    return;
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
    distinct_el(v);
}