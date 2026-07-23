// Sum of all the Sub-Arrays

#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n ;
    cout<<"Enter the number of elements in the vector : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += v[i]*(n-i)*(i+1);
    }
    cout<<"The overall sum is : "<<sum;
}