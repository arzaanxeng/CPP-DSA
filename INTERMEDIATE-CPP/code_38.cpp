// Reversing the digits of a number 
#include<iostream>
using namespace std;

// int reverseNumber( int n , int new_num = 0){
//     if( n == 0 ) return new_num;
//     return reverseNumber( n/10 , new_num * 10 + (n % 10));
// }

// Smarter way
void reversenumber( int n){
    if( n == 0) return ;
    cout<<(n%10);
    reversenumber(n/10);
}

int main(void){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    //int ans = reverseNumber(n);
    //cout<<"\nThe reversed number is : "<<ans<<endl;

    if( n == 0) cout<<"0";
    else reversenumber(n);
}