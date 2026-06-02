// Finding the index of the highest element in a Plateau array
#include<iostream>
using namespace std;

void max_value_index( int arr[] , int n){
    int max = 0 , min = 0;
    for(int i = 0 ; i < n-1 ; i++){
        if ( arr[i+1] > arr[i]){
            max = (i+1);
        }
        if( arr[i+1] < arr[i]){
            min = i;
            break;
        }
    }
    cout<<"The max value is contained within the index range : ["<<max<<" , "<<min<<"]";
}

int main(void){
    int arr[] = {1,2,4,6,6,6,8,8,8,8,8,10,10,10,16,16,16,16,12,11,11,11,7,4,1,1,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    max_value_index( arr , n);
}