#include<iostream>
using namespace std;


void LinearSearch(int arr[], int n, int x) {
    bool flag = false;
    int foundIndex = -1; 
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            flag = true;
            foundIndex = i; 
            break;          
        }
    }
    if(flag == true) cout << "\nThe target value " << x << " was found at the index number " << foundIndex << endl;
     else  cout << "\nThe target value " << x << " was not present in the array" << endl;
    
    cout << "\nThe original array is:" << endl;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";

}

int main(void){
    int x;
    cout<<"Enter the target value :"<<endl;
    cin>>x;
    int arr[] = {2,5,8,-2,5,-9,0,54,78,32,87,21};
    int n = sizeof(arr)/sizeof(arr[0]);

    LinearSearch(arr, n , x);
   
}