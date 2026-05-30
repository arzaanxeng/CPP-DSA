#include<iostream>
using namespace std;
// BUBBLE SORT
void bubble_sort( int arr[] , int n){
    
    for(int i = 0 ; i < n-1; i++){
        bool swapped = false;
        for(int j = 0 ; j < n-i-1 ; j++){
             if(arr[j] > arr[j+1]){
              swap(arr[j] , arr[j+1]);
              swapped = true;
             }
        }
        if( swapped == false) break; // If the array passed is already sorted then best time complexity case 'd occur --> O(N)
    }
}



int main(void){
    int n = 12;
    int arr[] = {23,45,87,95,57,73,27,49,77,51,39,40};// n = 12
    // ORIGINAL ARRAY
    cout<<"\nORIGINAL ARRAY :";
    for(int k= 0 ; k< n ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

    bubble_sort( arr , n);

    // SORTED ARRAY
    cout<<"\nSORTED ARRAY :";
    for(int k= 0 ; k< n ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<"\n\n";


}