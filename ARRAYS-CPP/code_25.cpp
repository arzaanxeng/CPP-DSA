#include <iostream>
using namespace std;
// SEARCH INSERT POSITION

int search_insert_target(int arr[] , int n , int target){

    int l = 0, r = n - 1;
   
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == target) {
            return m; 
        } 
        else if (arr[m] > target) {
            r = m - 1;
        } 
        else {
            l = m + 1;
        }
    }

    return l ;
}

int main(void){
    int arr[] = {1,2,3,4,5,7} ;
    int target = 8 , n = 6 ;
    
   int x =  search_insert_target( arr , n , target);
   cout<<x;
}