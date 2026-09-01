// Sum of N natural Numbers using recursion

#include <iostream>
#include <bitset>
using namespace std;

int f(int n){
    if( n == 1 ) return 1;
    int batch = f(n-1);
    return n + f(n-1);
}

int main(void){
    int n;
    cout<<"Enter the natural number : ";
    cin>>n;
    int ans = f(n);
    cout<<"Sum of N natural numbers is :  "<<ans;
}
