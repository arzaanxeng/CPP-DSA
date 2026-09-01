// Last Occurence of the target Element Index

#include <iostream>
#include <vector>
using namespace std;

void targetIndex(const int nums[], int n, int x, vector<int>& ans){
    if(n == 0) return;
    targetIndex(nums, n-1, x, ans);
    if(nums[n-1] == x) ans.push_back(n-1);
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
    cout<<"\nEnter the value of target : "; 
    cin>>x;
    vector<int>ans;
    targetIndex(arr,n,x,ans);

    cout<<"The target is at indices : "<<endl;
    if( ans.size() > 0 ) for ( int el : ans ) cout<<el<<" ";
    else cout<<"None";
    return 0;
}