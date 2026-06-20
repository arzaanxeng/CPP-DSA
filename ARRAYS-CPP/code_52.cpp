// Counting the frequency of elements
#include<iostream>
#include<map>
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
 
    map<int,int>m;
    for(int i = 0; i<n ; i++){
        if(m.find(arr[i]) != m.end()) m[arr[i]]++;
        else m[arr[i]] = 1;
    }

    for (const auto& p : m) {
        cout << p.first << "  :  " << p.second << "\n";
    }
    return 0;

}

