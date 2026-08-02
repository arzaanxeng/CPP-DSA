// Sum Of Digits
#include<iostream>
using namespace std;


int sumDigits( int n ){
    if( n == 0 ) return 0;
    int smallAns = n%10;
    int ans = smallAns + sumDigits(n/10);
    return ans;
}

int main(void){
    int n,x;
    cout<<"Enter the number : ";
    cin>>n;
    if (n < 0) return -1;
    int ans = sumDigits(n);
    cout<<"The sum of the digits of the number "<<n<<" is : "<<ans;
}