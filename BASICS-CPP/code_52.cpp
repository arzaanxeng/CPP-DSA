#include<iostream>
#include<bitset>
using namespace std;

bool checkSet(int n , int k){
    int x = 1 << k;
    return ((n & x) == 0);
}


int main(void){
    int n,k;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"\nEnter the bit position to perform operation on : ";
    cin>>k;

    if(checkSet(n,k)) cout<<"The bit is OFF";
    else cout<<"The bit is ON";
    
}