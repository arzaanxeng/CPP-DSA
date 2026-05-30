#include<iostream>
using namespace std;
// INSERTION SORT
void insertion_sort( int arr[] , int n){
    for(int i = 0 ; i<n ; i ++){
        int j = i;
        while( (j>0) && (arr[j-1] > arr[j])){
            swap(arr[j-1] , arr[j]);
            j--;
        }
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

    insertion_sort( arr , n);

    // SORTED ARRAY
    cout<<"\nSORTED ARRAY :";
    for(int k= 0 ; k< n ; k++){
        cout<<arr[k]<<" ";
    }
    cout<<"\n\n";
    
return 0;
}