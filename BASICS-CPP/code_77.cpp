// Min and Max in thhe array

#include <iostream>
using namespace std;

int f(vector<int>& nums , int n){
    if( n == 1 ) return nums[0];
    int smallAns = f(nums,n-1); // It is getting called up in Stack
    int ans = min(nums[n-1] ,smallAns ); // Comparison occurs with the small batch and and one iterated element
    return ans;
}

int f1(vector<int>& nums , int n){
    if( n == 1 ) return nums[0];
    int smallAns = f1(nums,n-1);
    int ans = max(nums[n-1] , smallAns);
    return ans;
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
    int ans = f(v,n);
    cout<<"The min element is : "<<ans;
    int ans2 = f1(v,n);
    cout<<"\nThe max element is : "<<ans2;

    return 0;
}
