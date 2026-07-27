// Print Sum Of All Sub-Arrays using CARRY FORWARD TECHNIQUE
#include<iostream>

using namespace std;
int main(void){
    int arr[] = {1,3,5,0,-4,5,3,2,4,5,6,3,2,1,4,5};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    for( int l = 0 ; l < n ; l++){
        int sum = 0;
        for(int r = l ; r < n ; r++){
            sum += arr[r];
            cout<<sum<<"   ";
        }
        cout<<"\n\n";
    }
}