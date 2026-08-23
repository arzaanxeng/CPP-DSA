/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. 
The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and 
eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will 
not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.

*/
#include <iostream>
#include <vector>
using namespace std;

long long totalHours(const vector<int>& piles , int k){
    long long totalHours = 0;
    for( int pile : piles) totalHours += (pile + k - 1)/k ;
    return totalHours;
}


int minEatingSpeed( vector<int>& piles , int h){
    int l = 1 , r = *max_element(piles.begin() , piles.end());
    int ans = r;
    while( l <= r ){
        int k = l + (r-l)/2;

        if(totalHours(piles,k) > h){
            l = k+1;
        }
        else if(totalHours(piles,k) <= h){
            r = k-1;
            ans  = k;
        }
    }
    return ans;
}


int main(void){
    vector<int>piles = {30,11,23,4,20};
    int hours ;
    cout<<"Enter the hours for which the guards will be gone for : ";
    cin>>hours;
    int ans = minEatingSpeed(piles,hours);
    cout<<"The minimum eating speed is : "<<ans;
}