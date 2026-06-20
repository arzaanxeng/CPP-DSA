// Unique Elements Containing array or not 
#include<iostream>
#include<set>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr[i];
    }
   
   bool dp = false;
   for(int i = 0 ; i<n ; i ++){
    for(int j = (i+1) ; j<n ; j++){
        if(arr[i] == arr[j]){
            dp = true;
            break;
        }
     }
   }
   if(dp)cout<<"Array consists of duplicate elements.";
   else cout<<"Array consists of unique elements.";

}

