// PREFIX SUM ARRAY 
#include<iostream>
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


    for(int i = 0 ; i<n ; i++){
        for(int j = i ; j< n ; j++){
            for(int k = i ; k <= j ; k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
 }
