// Factorial of a Number 
#include<iostream>
using namespace std;


long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(void){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (n < 0) return -1;
    long long ans = factorial(n);
    cout<<"The factorial of "<<n<<" is : "<<ans;
}