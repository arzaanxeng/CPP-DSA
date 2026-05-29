#include<iostream>
using namespace std;

int main(void){
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 3, 4, 5, 6};
    
    bool flag = false;
    
    for(int i = 0 ; i < 6 ; i++){
        flag = false; // Assume element doesn't exist in arr2 initially
        
        for(int j = 0 ; j < 5 ; j++){
            if(arr1[i] == arr2[j]){
                flag = true; // Found it!
                break;
            }
        }
        
        // CRITICAL FIX: Check the flag right here after the inner loop ends
        if (flag == false) {
            cout << "The missing element is: " << arr1[i] << endl;
            break; // Since we found the missing one, we can stop scanning entirely
        }
    }
    
    return 0;
}