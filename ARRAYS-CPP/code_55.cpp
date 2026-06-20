// Retreiving the array with unique elements only 
#include<iostream>
#include<set>
using namespace std;
int main(void){
    int n , m;
    cout<<"Enter the number of elements in the first array :";
    cin>>n;
    int arr1[n];
    for(int i = 0 ; i<n ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr1[i];
    }
    cout<<endl;
    cout<<"Enter the number of elements in the second array :";
    cin>>m;
    int arr2[m];
    for(int i = 0 ; i<m ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr2[i];
    }

    set<int>s;
    for(int i =0 ; i<n ; i++){
        s.insert(arr1[i]);
    }

    for(int i =0 ; i<m ; i++){
        s.insert(arr2[i]);
    }
    
    for(auto it = s.begin() ; it != s.end() ; it++){
        cout<<*it<<" ";
    }
    
    return 0;
}

