// Retreiving the array with unique elements only 
#include<iostream>
#include<set>
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
    set<int>s;
    for(int i =0 ; i<n ; i++){
        s.insert(arr[i]);
    }
    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }
    
    return 0;
}

