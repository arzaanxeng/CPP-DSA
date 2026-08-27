// Single Element - III

#include <iostream>
#include <vector>
using namespace std;

bool checkBit(int num , int j){
    int mask = 1<<j;
    return (num & mask) != 0;
}


void findImposters(int arr[] , int size){
    int culprits = 0;
    for( int i = 0 ; i < size ; i++ ) culprits ^= arr[i];
    int pos = -1;
    for( int i = 0 ; i < 32 ; i++){
        if(checkBit(culprits , i )){
            pos = i;
            break;
        }
    }

    int grp1 = 0 , grp2 = 0;
    for( int i = 0 ; i < size ; i++){
        if(checkBit(arr[i] , pos )) grp1 ^= arr[i];
        else grp2 ^= arr[i];
    }

    cout<<"( "<<grp1<<" , "<<grp2<<" )";

}

int main(void){
    int arr[] = {1,1,2,3,2,5,6,5,6,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    findImposters(arr , size);
}