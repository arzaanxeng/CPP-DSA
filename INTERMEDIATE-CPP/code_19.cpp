// Printing the factors of a number with TC :- O(N^1/2)
#include<iostream>
using namespace std;
int main(void){
    int n ;
    cout<<"Enter the required number : ";
    cin>>n;
    int i = 1;
    while( i*i <= n){
        if(n%i == 0)cout<<i<<" ";
        i++;
    }
    i--;
    while( i >= 1){
        int f1 = i;
        int f2 = n/i;
        if(f1 != f2)cout<<f2<<" ";
        i--;
    }
}
