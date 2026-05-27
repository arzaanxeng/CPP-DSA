#include<iostream>
using namespace std;

void swap(int arr[] , int n){
    bool flag = true;
     for(int i = 0 ; i < n/2 ; i++){
        if (arr[i] != arr[n-i-1]){
         flag = false;
         break;
        }
     }
     if(flag == true) cout<<"\nPalindrome\n";
     else cout<<"\nNot a Palindrome\n";
}



int main(void){
    while(true){
    int n ;
    cout<<"Enter the number of elemnts you would like in yr array: ";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr[i];
    }
    swap(arr , n);
    char choice;
    cout<<"Would u like to use the program again?(y/n) :";
    cin>>choice;
    if(choice == 'N' || choice == 'n' ){
        cout<<"Thanks for using the program!";
        break;
    }
    else continue;
}

return 0;
}