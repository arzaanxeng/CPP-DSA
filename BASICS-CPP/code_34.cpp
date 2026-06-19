#include<iostream>
#include<climits>
using namespace std;

void Second_Largest_approach1(int arr[] , int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0 ; i < n; i++){
        if(arr[i] > max1){
            max1 = arr[i];
        }
    }
    for(int i = 0 ; i < n; i++){
        if((max2 < arr[i]) && (arr[i] < max1)) max2 = arr[i];
    }
    cout<<max2<<endl;
}

void Second_Largest_approach2(int arr[], int n ){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i = 0 ; i <n ; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1) max2 = arr[i];
    }
    cout<<max2<<endl;
}

int main(void){

    int arr[] = {2,5,8,-2,-2,5,-9,0,54,78,32,87,21,79};
    int n = sizeof(arr)/sizeof(arr[0]);

    Second_Largest_approach1(arr, n );
    Second_Largest_approach2(arr, n );
}