// Is Sorted

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const int nums[], int n){
    if( n == 1 ) return true;
    bool smallAns = isSorted(nums,n-1);
    if( smallAns == false ) return false;
    return nums[n-1] >= nums[n-2];
}

int main(void){
    int n, x;
    cout<<"Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    for( int i = 0 ; i < n ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" : "; 
    cin>>arr[i]; 
    } 
    bool ans = isSorted(arr,n);
    if(ans)cout<<"Yes";
    else cout<<"No";
}