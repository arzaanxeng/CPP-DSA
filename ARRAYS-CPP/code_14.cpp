#include<iostream>
using namespace std;
/*                  
                                        ===== LINEAR SEARCH ALGORITHM =====
Linear search (also known as sequential search) is a simple searching algorithm that inspects every element in a data 
collection one by one from start to finish until the target value is found or the data is exhausted. It requires no pre
-sorting or data manipulation to function properly

 */
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