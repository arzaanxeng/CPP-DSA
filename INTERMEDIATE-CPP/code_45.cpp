// Printing the array in order
#include <iostream>
#include <vector>
using namespace std;

// Printing the arr in order
void reverseArray( vector<int>& nums , int n){
    if( n == 0 ) return;
    reverseArray( nums , n-1);
    cout<<nums[n-1]<<" ";
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
    cout<<"\nThe array is : "<<endl;
    reverseArray(v , n );
    return 0;
}