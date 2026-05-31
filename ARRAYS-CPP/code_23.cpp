#include<iostream>
using namespace std;
// Linear , Binary search

void linear_search(int arr[] , int n , int target){
    bool flag = false ;
    int i = 0 ;
    for( ; i < 15 ; i++){
        if( arr[i] == target ){
            flag = true;
            break;
        }
    }
    if(flag) cout<<"\n\nThe target number "<<target<<" exist in the array at the index number "<<i<<".\n\n";
}

void binary_search( int arr[] , int n , int target){
    int l = 0 , r = n-1;

    
    while(l<=r){
        int m = l + (r-l)/2;

        if( arr[m] == target ){
          cout<<"\nTarget was found at the index number "<<m<<"\n\n";
          break;
        } 

        else if( arr[m] < target ){
            l = m+1;
        }
        else r = m-1;
    }
}


int main(void){
    int arr[] = {1,2,5,78,65,34,59,82,35,11,23,120,99,23,100}; // n =15
    int arr1[] = {1, 2, 5, 11, 23, 23, 34, 35, 59, 65, 78, 82, 99, 100, 120};

    int target = 11 , n = 15 ;
    linear_search( arr , n , target );
    binary_search( arr1 , n , target );

}

