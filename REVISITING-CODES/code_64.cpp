// Single Element - II

#include <iostream>
#include <vector>
using namespace std;

bool checkBit(int num , int j){
    int mask = 1<<j;
    return (num & mask) != 0;
}

int setBit( int ans , int j ){
    int mask = 1 << j;
    ans = ans | mask;
    return ans;
}

int findImposter(int arr[] , int size){
    int ans = 0;
    for( int j = 0 ; j < 32 ; j++){
        int sum = 0;
        for( int i = 0 ; i < size ; i++){
            if(checkBit(arr[i],j)) sum++;
        }
        if( sum%3 != 0 ) ans = setBit(ans,j);
    }
    return ans;
}

int main(void){
    int arr[] = {1,1,7,1,3,3,3,4,4,5,5,5,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = findImposter(arr , size);
    cout<<ans;
}