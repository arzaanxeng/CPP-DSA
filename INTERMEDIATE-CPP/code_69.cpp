/*
You are given a sorted array of integers arr and an integer target. 
Your task is to determine how many times target appears in arr.

Return the count of occurrences of target .
*/

/*
Given a sorted array of nums and an integer x, write a program to find the lower bound of x.

The lower bound algorithm finds the first and smallest index in a sorted array where the value at
that index is greater than or equal to a given key i.e. x.

If no such index is found, return the size of the array.

Example 1
Input : nums= [1,2,2,3], x = 2
Output:1
Explanation:
Index 1 is the smallest index such that arr[1] >= x.
*/

#include<iostream>
#include<vector>
using namespace std;

int upperBound( vector<int>nums , int x ){
    int l = 0 , r = nums.size() ;
    int ans = -1;
    while( l <= r ){
        int m = l + (r-l)/2;
        if( nums[m] == x ){
            ans = m;
            l = m+1;
        }
        else if( nums[m] > x) r = m-1;
        else l = m+1;
    }
    return ans ;
}

int lowerBound( vector<int>nums , int x ){
    int l = 0 , r = nums.size() ;
    int ans = -1;
    while( l <= r ){
        int m = l + (r-l)/2;
        if( nums[m] == x ){
            ans = m;
            r = m-1;
        }
        else if( nums[m] > x) r = m-1;
        else l = m+1;
    }
    return ans;
}

int main(void){
    int n , x;
    cout<<"Enter the number of elements in the arr: ";
    cin>>n;
    vector<int>v(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the "<<(i+1)<<" value : ";
        cin>>v[i];
    }
    cout<<"\nEnter the value of target : ";
    cin>>x;

    int l = lowerBound(v,x);
    int r = upperBound(v,x);
    if( l == -1 && r == -1){
        cout<<"The target is not present in the array.";
        return 0;
    }
    int count = (r-l) + 1 ; // Forgot about BODMAS :(
    cout<<"The number of occurences of the target is/are : "<<count;

}