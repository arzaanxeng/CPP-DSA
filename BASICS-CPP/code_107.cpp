// Sorting : Given an array and X, rearrange the elements such that all elements < x comes before all elements >= x.
#include<iostream>
#include<vector>
using namespace std;

int main(void){
    vector<int> nums = {10,45,83,29,7,67,55,3,2,4,99,79,345,6,732,46};
    vector<int> temp(nums.size(),0);
    int x;
    cout<<"Enter the required number : ";
    cin>>x;
    int ptr = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        if( nums[i] < x ){
            temp[ptr] = nums[i];
            ptr++;
        }
    }
    for( int i = 0 ; i < nums.size() ; i++){
        if( nums[i] >= x ){
            temp[ptr] = nums[i];
            ptr++;
        }
    }
    nums = temp;
    for( int el : nums ) cout<<el<<" ";
}

// But the Problem takes SC : O(N)