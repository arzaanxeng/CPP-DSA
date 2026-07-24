// Finding wether the array contains a duplicate element
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void is_duplicate(vector<int> &v){
    unordered_set<int>s;
    for(int i : v){
        if(s.find(i) != s.end()){
            cout<<"Yes , the array has duplicates!";
            return;
        }
        else{
            s.insert(i);
        }
    }
    cout<<"No , the array does not contain duplicates!";
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
    is_duplicate(v);
}