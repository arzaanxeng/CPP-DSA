// Recursion 1
#include<iostream>
using namespace std;

void backward( int n){
    if( n == 0 ) return;
    cout<<n<<" ";
    backward(n-1);
}

void forward( int n){
    if( n == 0) return;
    forward(n-1);
    cout<<n<<" ";
}

/* This is done using two functions 
void backwardzigzag( int n){
    if( n == 0 ) return;
    cout<<n<<" ";
    backwardzigzag(n-1);
}

void forwardzigzag( int n){
    if( n == 1 ) return;
    forwardzigzag(n-1);
    cout<<n<<" ";   
}

void zigzag( int n){
    backwardzigzag(n);
    forwardzigzag(n);
}
*/

// Optimised version of the zigzag pattern 
void zigzag( int n){
    if ( n == 0 ) return;
    cout<<n<<" ";
    zigzag(n-1);
    if( n != 1 )cout<<n<<" ";
}


int main(void){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    forward(n);
    cout<<"\n\n";
    backward(n);
    cout<<"\n\n";
    zigzag(n);
}