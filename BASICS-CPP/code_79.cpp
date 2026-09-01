// Last Occurence of the target Element Index

#include <iostream>
using namespace std;

int targetIndex(const int nums[] , int n , int x){
    if( n == 0 ) return -1;
    if( nums[n-1] == x ) return n-1;
    return targetIndex(nums,n-1,x);
}

int main(void){
    int n,x;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"\n";
    int arr[n];
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the value of element number "<<(i+1)<<" : ";
        cin>>arr[i];
    }
    cout<<"\nEnter the value of target : ";
    cin>>x;

    int ans = targetIndex(arr,n,x);
    cout<<"The target was found last at the index number : "<<ans;
    return 0;
}
