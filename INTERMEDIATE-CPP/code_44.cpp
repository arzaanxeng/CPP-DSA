// Printing the array in reverse order
#include <iostream>
#include <vector>
using namespace std;

// Reversing The Array !!!
void reverseArray( vector<int>& nums , int n){
    if( n == 0 ) return ;
    cout<<nums[n-1]<<" ";
    reverseArray( nums , n-1);
}

int main(void){
    int n;
    cout<<"Enter the number of elemenst in the arr : ";
    cin>>n;
    vector<int>v(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"\nEnter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
        cout<<endl;
    }
    reverseArray(v , n );
    return 0;
}