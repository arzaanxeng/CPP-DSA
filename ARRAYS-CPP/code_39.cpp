#include<iostream>
using namespace std;
// PRINTING THE REQUIRED SUM OF ALL SUB ARRAYS ( BEST OPTIMISED APPROACH) --> O(N)
int main(void){
  int arr[] = {1,7,5,9,21,65,98,78,65,45,23};
  int n = sizeof(arr)/sizeof(arr[0]);

  long long sum  = 0;
  for(int i = 0 ; i< n ; i++){
    sum += arr[i]*(n-i)*(i+1);
  }
  cout<<"The sum of all sub-arrays is :"<<sum;
  return 0;
} 