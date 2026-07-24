// Finding the frequency of elements in the array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void frequency(vector<int> &v){
    unordered_map< int , int >m;
    for(int i = 0 ; i < v.size() ; i++){
        if(m.find(v[i]) != m.end()){
            m[v[i]]++;
        }
        else{
            m[v[i]] = 1;
        }
    }
    cout<<"Number : Frequency\n";
    for( const auto &pair : m){
        
        cout<<pair.first<<"      :      "<<pair.second<<"\n";
    }
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
    frequency(v);
}