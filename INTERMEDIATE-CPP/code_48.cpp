// Sum of the elements in the array
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

int sumArray( vector<int>& nums , int n){
    if( n== 0) return 0;
    return sumArray( nums , n-1) + nums[n-1]; 
    // Adding the last index number of new array to the previous array last index number
}

int main(void){
    int n;
    cout<<"Enter the number of elements in the arr : ";
    cin>>n;
    vector<int>v(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }

    int ans = sumArray(v , n );
    cout<<"\nThe sum of the elements in the array is : " << ans;
    return 0;
}