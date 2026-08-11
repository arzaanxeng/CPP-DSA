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

int upperBound(vector<int> &nums, int x){
        int l = 0 , r = nums.size() - 1 ;
        int ans = -1;
        while( l <= r ){
            int m = l + (r-l)/2;
            if( nums[m] <= x){
                ans = m;
                l = m+1;
            }
            else r = m-1;
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
    cout<<"\nEnter the value of upper bound : ";
    cin>>x;

    int ans = upperBound(v,x);
    cout<<"The lower bound value is at the index : "<<ans;
}