// Minimum element in the array
#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;


int minArray( vector<int>& nums , int n){
    if( n == 0 ) return INT_MIN;
    int smallAns = minArray( nums , n -1 );
    return max( smallAns , nums[n-1]);
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
    int ans = minArray(v , n );
    cout<<"\nThe minimum element in the array is : " << ans;
    return 0;
}