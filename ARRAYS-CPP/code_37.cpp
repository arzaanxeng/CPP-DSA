#include<iostream>
using namespace std;
// PRINTING THE REQUIRED SUB ARRAY
int main(void){
  int arr[] = {1,7,5,9,21,65,98,78,65,45,23};
  int n = sizeof(arr)/sizeof(arr[0]);

  int l , r;
  cout<<"Enter the value of left index :";
  cin>>l;
  cout<<"Enter the value of right index :";
  cin>>r;
   
  int sum = 0;
  for(int i = l ; i <= r ; i++){
     for(int j = i ; j <= r ; j++){
        for( int k = i ; k <= j ; k++) {
            sum += arr[k];
     }
     cout<<endl;
  }
}
cout<<"The required sum of all sub-arrays is :"<<sum;

return 0;
}