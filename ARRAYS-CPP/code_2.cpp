#include<iostream>
using namespace std;
// 1st Approach to reverse the array 

int main(void){
    int n;
    cout<<"\nEnter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int k =0 ; k < n ; k++){
        cout<<"Enter the value of elemnt number "<<(k+1)<<" :";
        cin>>arr[k];
    }
    int start = 0 , end = n-1;
    while(start <= end ){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
 
    cout<<"The revrsed array is : \n";
    for(int k =0 ; k < n ; k++){
        cout<<arr[k]<<"  ";
    }
}