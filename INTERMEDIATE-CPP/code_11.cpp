#include<iostream>
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

    int prefix_arr[n] , sum = 0;
    for(int i =0 ; i<n ; i++){
        sum += arr[i];
        prefix_arr[i] = sum;
    }


    /* BRUTE FORCE APPROACH
    int ans =0;
    for(int i = 0 ; i<n ; i++){
        int sum = 0;
        for(int j = i ; j< n ; j++){
            for(int k = i ; k <= j ; k++){
                sum += arr[k];
            }
        }
        ans += sum;
    }
    */
   int sum2 =0;
   for(int i =0 ; i<n ; i++){
    for(int k = i ; k<n ; k++){
        if(i==0) sum2+= prefix_arr[k];
        else sum2 += (prefix_arr[k] - prefix_arr[i-1]);
    }
   }
   cout<<sum2;





 }
