// Recursion

#include <iostream>
using namespace std;

void f(int n ){
    if( n == 0 ) return;
    cout<<n%10;
    f(n/10);
}


int main(void){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if( n == 0 ) cout<<"0";
    else f(n);
    return 0;
}

