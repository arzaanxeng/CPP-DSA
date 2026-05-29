#include<iostream>
using namespace std;
int main(void){
    // Findingvthe second highest element
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    for(int k = 0 ; k < n ; k++){
        cout << "Enter the value of element number " << (k + 1) << " : ";
        cin >> arr[k];
    }
    int maximum = arr[0];
    for(int i =0 ; i < n ; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }

    int second_max = INT16_MIN;
    for(int k = 0 ; k < n ; k++){
        if((arr[k] > second_max) && (arr[k] < maximum)){
            second_max = arr[k];
        }
    }

    cout<<"\nThe second maximum element is :"<<second_max;
}