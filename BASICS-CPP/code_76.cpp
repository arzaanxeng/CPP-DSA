// Array

#include <iostream>
using namespace std;

void f_reverse(vector<int>& nums , int n){
    if( n == 0 ) return ;
    cout<<nums[n-1]<<" ";
    return f_reverse(nums,n-1);
}


void f_iterative(vector<int>& nums , int n){
    if( n == 0 ) return;
    f_iterative(nums,n-1);
    cout<<nums[n-1]<<" ";
}

int main(void){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"\n";
    vector<int>v(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the value of element number "<<(i+1)<<" : ";
        cin>>v[i];
    }
    f_reverse(v,n);
    cout<<"\n\n";
    f_iterative(v,n);
    return 0;
}
