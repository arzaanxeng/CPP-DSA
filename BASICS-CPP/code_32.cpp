// #include<iostream>
// using namespace std;

// void BubbleSort(int arr[] , int n){
    
//     for(int i = 0 ; i< n-1 ; i++){
//         bool swapped = false;
//         for(int j = 0 ;j < n-i-1 ; j++){
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//         }

//         if(!swapped) {
//             break ;
//         }
//     }
//  } 
// }


// int main(void){
//     int arr[] = {3,5,2,8,6,1,0,-3,-7};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     BubbleSort(arr,n);
//     for(int i = 0 ; i<n ; i++) cout<<arr[i]<<" ";
// }
#include<iostream>
#include<algorithm> // Required for std::swap
using namespace std;

void BubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;
        
        // Inner loop executes a single full pass
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        } // <-- Inner loop ends here

        // Check if any swaps happened during this full pass
        if(!swapped) {
            break; 
        }
    } // <-- Outer loop ends here
} // <-- Function ends here

int main(void) {
    int arr[] = {3, 5, 2, 8, 6, 1, 0, -3, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    BubbleSort(arr, n);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}