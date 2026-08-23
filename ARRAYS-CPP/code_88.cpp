// Find Nth Root of an Integer 
/*
Given two numbers M and N, find the Mth root of N. The Mth root of a number N
is defined as a number X such that when X is raised to the power of M, it equals N. 
If the Mth root is not an integer, return -1.

Example 1:
Input: M = 3, N = 27
Output: 3
Explanation: The cube root of 27 is equal to 3.

Example 2:
Input: M = 4, N = 69
Output:-1
Explanation: The 4th root of 69 does not exist. So, the answer is -1.
*/

#include <iostream>
#include <vector>
using namespace std;

int f(int mid , int n , int m){
    long long ans = 1;
    for( int i = 1 ; i <= m ; i++) ans *= mid;
    if( ans > n ) return 1;
    if( ans == n ) return 0;
    return -1;
}

int main(void){
    int n , m;
    cout<<"Enter the Integer : ";
    cin>>n;
    cout<<"Enter the mth root of the integer : ";
    cin>>m;
    if( n == 1){
        cout<<"The answer is : 1";
        return 0;
    }

    int lo = 0 , hi = n/2 ;
    int ans = -1;
    while( lo <= hi){
        int mid = lo + (hi-lo)/2;
        if( f(mid,n,m) == 0 ) {
            ans = mid;
            break;
        }
        else if ( f(mid,n,m) == -1 ) lo = mid+1;
        else hi = mid-1;
    }
    cout<<"The answer is : "<<ans;
}
