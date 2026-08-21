/*
Given a sorted array nums and an integer x. 
Find the floor and ceil of x in nums. 
>The floor of x is the largest element in the array which is smaller than or equal to x. 
>The ceiling of x is the smallest element in the array greater than or equal to x. If no floor or ceil exists, output -1.
*/

#include<iostream>
using namespace std;


int floor(vector<int>& nums , int target){
    int l = 0 , r = nums.size() - 1 , ans = -1;

    while( l <= r ){
        int m = l + (r-l)/2;
        if(nums[m] <= target){
            ans = nums[m];
            l = m+1;
        }
        else r = m-1;
    }
    return ans;
}


int ceil(vector<int>& nums , int target){
    int l = 0 , r = nums.size() - 1 , ans = -1;

    while( l <= r ){
        int m = l + (r-l)/2;
        if(nums[m] >= target){
            ans = nums[m];
            r = m-1;
        }
        else l = m+1;
    }
    return ans;
}

int main(void){
    vector<int>v= {3,5,8,15,19,23,27,29,34,47,49,51};
    int target = 20;
    int upper = ceil(v,target);
    int lower = floor(v,target);
    if( upper != -1 && lower != -1){
        cout<<"The ceil of the required number is : "<<upper<<" and the floor is : "<<lower;
    }
    else if( upper == -1 ) cout<<"The ceil of the required number is does not exist but the floor is : "<<lower;
    else cout<<"The ceil of the required number is : "<<upper<<" but the floor does not exist ";
}
