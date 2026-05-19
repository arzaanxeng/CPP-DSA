#include<iostream>
using namespace std;
int main(void){
    int n, rn = 0;
    cout<<"Enter the number :";
    cin>>n;
    int original_n = n;
    // CHECK WETHER THE GIVEN NUMBER IS A PALINDROME OR NOT
    while(n>0){
        int rem = n%10;
        rn = (rn*10) + rem;
        n = n/10;
    }
    if(rn == original_n)cout<<"The given number is a palindrome.";
    else cout<<"The given number is not a palindrome.";
}