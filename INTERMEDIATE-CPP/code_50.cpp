// Find the last occurence of target element in the array
#include <iostream>
#include <vector>
using namespace std;

int findArray( vector<int>& nums , int n ,  int target){
    if( nums[n-1] == target ) return n-1;
    return findArray( nums , n-1 , target );
}

int main(void){
    int n , k;
    cout<<"Enter the number of elements in the arr : ";
    cin>>n;
    vector<int>v(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }

    cout<<"\nEnter the target value : ";
    cin>>k;
    int ans = findArray(v , n , k);
    if ( ans == -1 )cout<<"The value was not found in the array !";
    else cout<<"The value of the last index where the target was found was : "<<ans;
}