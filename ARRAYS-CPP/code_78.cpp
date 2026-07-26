/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. 
If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
Return the minimum integer k such that she can eat all the bananas within h hours.
*/
// KOKO EATING BANANAS


// class Solution {
// public:

//     bool is_possible(vector<int>& piles , int m , int h_max){
//         int h_taken = 0 ;
//         for( int i = 0 ; i < piles.size() ; i++){
//             if(piles[i] <= m){
//                 h_taken ++;
//             }
//             else{
//                 int x = ceil((double)piles[i] / m);
//                 h_taken += x;
//             }
//         }
//         if( h_taken <= h_max)return true;
//         return false;
//     }

//     int minEatingSpeed(vector<int>& piles, int h) {
//         int total_bananas = 0;
//         for(int i = 0 ; i < piles.size() ; i++) total_bananas += piles[i];
//         int n = piles.size() , k = -1;
//         int l = 1 ; 
//         int r = total_bananas;

//         while( l <= r){
//             int m = l + (r-l)/2;
//             if(is_possible(piles , m , h)){
//                 k = m;
//                 r = m-1;
//             }
//             else{
//                 l = m+1;
//             }
//         }
//         return k;
//     }
// };