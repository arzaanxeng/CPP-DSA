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
 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == INT_MIN) continue;
        int count = 1;
        for(int j = (i+1) ; j<n ; j++){
            if(arr[i] == arr[j]){
            count++;
            arr[j] = INT_MIN;
            }
        }
    cout<<"The element "<<arr[i]<<" frequency is : "<<count<<endl;
    
    }
}

