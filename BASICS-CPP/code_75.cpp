// Fibonacci Sequence

#include <iostream>
#include <bitset>
using namespace std;

long long f(int n){
    if( n == 1 ) return 0;
    if( n == 2 ) return 1;
    long long ans = f(n-1) + f(n-2);
    return ans;
}

int main(void){
    int n;
    cout<<"Enter the nth term of fib : ";
    cin>>n;
    long long ans = f(n);
    cout<<"The nth fibonacci sequence term is : "<<ans;
}
