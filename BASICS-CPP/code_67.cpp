// Move Zeroes to the End
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int>& nums){
    int lastseen = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        if(nums[i] != 0){
            swap(nums[i] , nums[lastseen]);
            lastseen++;
        }
    }
    cout<<"\nThe new array : ";
    for( int i = 0 ; i < nums.size() ; i++) cout<<nums[i]<<" ";
}

int main(void){
    int n ;
    cout<<"Enter the number of elements in the arr : ";
    cin>>n;
    vector<int>v(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    moveZeroesToEnd(v);
}