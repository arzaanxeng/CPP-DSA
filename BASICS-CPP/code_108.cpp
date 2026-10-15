// Sorting : Given an array and X, rearrange the elements such that all elements < x comes before all elements >= x.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void){
    vector<int> nums = {10,45,83,29,7,67,55,3,2,4,99,79,345,6,732,46};
    vector<int> temp(nums.size(),0);
    int x;
    cout<<"Enter the required number : ";
    cin>>x;
    int l = 0 ; 
    int r = nums.size() -1;
    // Using while loop as this problem is same as sorting 0's and 1's in an array using two pointers !!!
    while( l <= r ){
        if( nums[l] < x ) l++;
        else{
            swap(nums[l] , nums[r]);
            r--;
        }
    }
    for( int el : nums ) cout<<el<<" ";
}

// Now the Problem takes SC : O(0) and TC : O(N)