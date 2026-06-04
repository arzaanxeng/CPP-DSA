#include<iostream>
using namespace std;

// PRINTING THE REQUIRED SUM OF ALL SUB ARRAYS
int main(void){
  int arr[] = {1,7,5,9,21,65,98,78,65,45,23};
  int n = sizeof(arr)/sizeof(arr[0]);

  int l , r;
  cout<<"Enter the value of left index :";
  cin>>l;
  cout<<"Enter the value of right index :";
  cin>>r;
   

  int p_arr[n];
  int running_sum = 0;
  for(int i = 0 ; i < n ; i++){
     running_sum += arr[i]; 
     p_arr[i] = running_sum;
  }
  

  int total_sum = 0;
  for(int i = l ; i <= r ; i++){
     for(int j = i ; j <= r ; j++){
        // Use prefix sum formula: prefix[j] - prefix[i-1]
        if(i == 0) {
            total_sum += p_arr[j];
        } else {
            total_sum += (p_arr[j] - p_arr[i-1]);
        }
     }
  }


  cout<<"The required sum of all sub-arrays is :"<<total_sum<<endl;

  return 0;
} 