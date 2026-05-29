#include<iostream>
using namespace std;

<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
// code written by gemini 
// Can't understand the unique_index 
// I approached with double for loop iterating over whole array comparing one fixed element with rest of the elements .

int main(void){
    int arr[] = {1, 2, 3, 4, 5, 7, 3, 2, 4, 2};
    int n = 10;
    
    // The first element is always unique initially
    int unique_index = 1; 

    for(int i = 1 ; i < n ; i++){
        bool is_duplicate = false;

        // Scan ONLY the unique elements found so far
        for(int j = 0 ; j < unique_index ; j++){
            if (arr[i] == arr[j]){
                is_duplicate = true;
                break;
            }
        }
        
        // If it's a brand new number, save it at the unique_index checkpoint
        if(is_duplicate == false){
            arr[unique_index] = arr[i];
            unique_index++;
        }
    }
    
    // Print the clean, unique array elements
    cout << "Unique elements: ";
    for(int i = 0; i < unique_index; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
