#include<iostream>
using namespace std;
// Linear Search
int main(void){
    int arr[] = {1,4,7,3,12,78,65,43,32,98,121,34,67,59,76,45,21,30};
    int x = 30;
    bool flag = false;
    for(int i = 0 ; i < 18 ; i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
    }
    if( flag == true) cout<<"The number exists in the array.";
    else cout<<"The number does not exist in the array.";
return 0;
}