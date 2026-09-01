#include <iostream>
#include <bitset>
using namespace std;

int main(){
    // Left Shift
    int a = 10 , b = 100;
    int x = a << 2 ;
    int y = b >> 3 ;
    cout<<"The initial value of a was "<<a<<" but after the left shift by 2 units it is : "<<x;
    cout<<endl;
    cout<<"The initial value of b was "<<b<<" but after the right shift by 3 units it is : "<<y;
    // The bitwise operators are extremely fast with TC: O(1) !

    // Given an integer N and an index i, print whether the ith bit is set or not.
    int n , k;
    cout<<"\n\nEnter a number : ";
    cin>>n;
    cout<<"\nWhich bit would u like to check ? "<<endl;
    cin>>k;
    int mask = 1 << k ;
    if( (mask & n) == 0) cout<<"OFF";
    else cout<<"ON";

}