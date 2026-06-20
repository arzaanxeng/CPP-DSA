// Retreiving the array with unique elements only 
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr[i];
    }
    vector<int>v;
    for(int i = 0 ; i<n ; i++){
        bool duplicate = false;
        for(int j = 0 ; j<n ; j++){
            if((arr[i] == arr[j]) && (i!=j)) duplicate = true;
        }
        if(!duplicate) v.push_back(arr[i]);
    }

    for(auto it = v.begin() ; it != v.end() ; it++){
        cout<<*it<<" ";
    }

    return 0;
}

