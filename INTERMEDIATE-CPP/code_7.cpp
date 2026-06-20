// PREFIX SUM ARRAY 
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

    int q , l , r , sum = 0;
    cout<<"Enter the number fo queries :";
    cin>>q;

    int prefix_arr[n];
    for(int i = 0 ; i <n ; i++){
        sum += arr[i];
        prefix_arr[i] = sum;
    }

    for(int i = 0 ; i< q ; i++){
        cout<<"Enter the value of left index :";
        if((l<0) || (l > n-1)) cout<<"Index out of Bound !"<<endl;
        else cin>>l;
        if((r<0) || (r > n-1))cout<<"Enter the value of right index :"<<endl;
        else cin>>r;

        if(l==0) cout<<"The answer is :"<<prefix_arr[r]<<endl;
        else cout<<"The answer is :"<<prefix_arr[r] - prefix_arr[l-1]<<endl;
    }
    return 0; 
}