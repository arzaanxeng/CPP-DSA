
// MAXIMUM CONSECUTIVE RECURRENCE OF ANY ELEMENT

#include<iostream>
using namespace std;

int main(void){
    int arr[] = {0,0,0,0,1,1,0,1,0,0,1,1,1,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int count = 1;      
    int max_count = 1; 
    int best_element = arr[0];
    
    for(int i = 1 ; i < n ; i++){
        if(arr[i] == arr[i-1]) {
            count++; 
        }
        else {
            count = 1; 
        }
    
        if(count > max_count) {
            max_count = count;
            best_element = arr[i]; // Remember which element holds the record
        }
    }

    cout << "\nThe element with the max consecutive recurrence is: " << best_element << endl;
    cout << "\nIts longest streak is: " << max_count<<endl;
    return 0;
}