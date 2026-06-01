#include <iostream>
using namespace std;
int main(void){
    int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = 12 , count = 0;
    // Linear search
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0) count++;
    }
    cout<<"The number of zeroes in the array is : "<<count;
}