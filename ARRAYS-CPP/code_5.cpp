#include<iostream>
using namespace std;

// MY APPROACH 

// COMPLEXITY IS 0(N^2)
/*int main(void){
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
        
        if (flag == false) {
            cout << "The missing element is: " << arr1[i] << endl;
            break; 
        }
    }
    return 0;
}*/

int main(void){
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 3, 4, 5, 6};

// COMPLEXITY : O(N)

int sum1 = 0;
for(int i = 0; i < 6; i++) sum1 += arr1[i]; 

int sum2 = 0;
for(int j = 0; j < 5; j++) sum2 += arr2[j]; 

int missing_element = sum1 - sum2; 
}
