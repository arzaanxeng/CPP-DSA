#include<iostream>
using namespace std;
// SELECTION SORT
int main(void){
    int arr[] = {23,45,87,95,57,73,27,49,77,51,39,40};// n = 12
    // ORIGINAL ARRAY
    cout<<"\nORIGINAL ARRAY :";
    for(int k= 0 ; k<12 ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    for(int i = 0 ; i < 12 ; i++){
        int loc = i;
        for(int j = (i +1) ; j < 12 ; j++){
            if( arr[j] < arr[loc]){
                //min = arr[j];
                loc = j; // MAIN HEART OF THE SYSTEM WHICH ITERATES OVER THE WHOLE ARRAY TO FIND THE MIN NUMBER
            }
        }
        swap(arr[i] , arr[loc]);
    }

    // SORTED ARRAY
    cout<<"\nSORTED ARRAY :";
    for(int k= 0 ; k<12 ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<"\n\n";
}