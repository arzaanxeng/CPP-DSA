// Duplicate in an array
#include<iostream>
using namespace std;

bool is_duplicate(int arr[] , int n){

    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(arr[i] == arr[j]) return 1;
        }
    }
    return 0;
}

int main(void){

    int arr[] = {1,2,3,4,5,8,3,9,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool is  = is_duplicate(arr , n );
    if(is) cout<<"The array contains duplicate elements !";
    else cout<<"The array does not contain any duplicate elements !";
return 0;
}