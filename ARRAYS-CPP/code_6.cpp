#include<iostream>
using namespace std;
int main(void){
      int n;
    cout<<"\nEnter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int k =0 ; k < n ; k++){
        cout<<"Enter the value of elemnt number "<<(k+1)<<" :";
        cin>>arr[k];
    }

    // Rotating the array by 1
    int temp = arr[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;

    // rotated array:
    cout<<"The rotated element is :\n";
   for(int k =0 ; k < n ; k++){
   cout<<arr[k] <<"  ";
    }
}