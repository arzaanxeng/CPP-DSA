// Sum Of Numbers
#include<iostream>
using namespace std;


long long power(int n , int x) {
    if( x == 0) return 1;
    int smallAns = power( n , x-1);
    int ans = n*smallAns;
    return ans;
}

int main(void){
    int n,x;
    cout<<"Enter the number : ";
    cin>>n;
    if (n < 0) return -1;
    cout<<"\n Enter the power : ";
    cin>>x;
    if( x <= 0 ) return n;
    long long ans = power(n , x);
    cout<<"\nThe answer of "<<n<<" raised to the power of "<<x<<" is : "<<ans;
}