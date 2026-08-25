/*
Given an array nums of size n, which denotes the positions of stalls, and an integer k, 
which denotes the number of aggressive cows, assign stalls to k cows such that the minimum 
distance between any two cows is the maximum possible. Find the maximum possible minimum distance.

Example 1
Input: n = 6, k = 4, nums = [0, 3, 4, 7, 10, 9]
Output: 3
Explanation:
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions [0, 3, 7, 10]. 
Here the distances between cows are 3, 4, and 3 respectively.

In no manner can we increase the minimum distance beyond 3.

*/
#include <iostream>
#include <vector>
using namespace std;

bool isPossible( vector<int>&stalls , int k , int m ){
    int cows = 1;
    int lastPos = stalls[0];
    for( int i = 1 ; i < stalls.size() ; i++){
        int newPos = stalls[i];
        if( newPos - lastPos >= m ){
            lastPos = newPos;
            cows++;
        }
    }
    return cows >= k;
}

int MaxMinDistance( vector<int>&stalls , int k ){
    sort(stalls.begin() , stalls.end());
    int l = 0;
    int r = *max_element(stalls.begin() , stalls.end()) - *min_element(stalls.begin() , stalls.end());
    int ans = -1;
    while( l <= r ){
        int m = l + (r-l) /2;
        if(isPossible(stalls,k,m)){
            ans = m;
            l = m+1;
        }
        else r = m-1;
    }
    return ans;
}


int main(void){
    int n , k ;
    cout<<"Enter the number of stalls : ";
    cin>>n;
    vector<int>stalls(n);
    for( int i = 0 ; i < n ; i++){
        cout<<"Enter the position of "<<(i+1)<<" stall : ";
        cin>>stalls[i];
    }

    cout<<"\nEnter the number of aggressive Cows : ";
    cin>>k;

    int ans = MaxMinDistance(stalls,k);
    if(ans == -1) cout<<"The cows cannot be placed !";
    else cout<<"The maximum minimum distance between the cows is : "<<ans;
}