#include<iostream>
using namespace std;
int main(void){
    int arr[] = {11,32,45,67,23,90,97,7656,39,58,4,53,48,23};
    int x;
    cout<<"\n======== FINDING AN ELEMENT IN AN ARRAY ========\n";
    cout<<"Enter the number to find wether it is present in array or not :";
    cin>>x;
    
    bool flag = false;
    for(int i =0 ; i < 14 ; i++){
        if(arr[i]== x){
            flag = true;
            break;
        }
    }
    if(flag == true) cout<<"The number "<<x<<" is present in the array.\n";
    else cout<<"The number "<<x<<" is not present in the array.\n";
 
    cout<<"\nThe elements in the array were:\n";
    for(int j = 0 ; j<14 ; j++){
        cout<<arr[j]<<"  ";
    }

}