// Swapping the two numbers
#include <iostream>
#include <bitset>
using namespace std;

void swap_numbers(int a , int b){
    // Using XOR operator we can actually swap two number and without creating any extra variable
    cout<<"\nOriginally the numbers were : "<<endl;
    cout<<" A : "<<a<<" and B : "<<b<<endl;
    a = a^b;
    b = a^b;
    a = a^b;
    cout<<"\nAfter swapping the numbers were : "<<endl;
    cout<<" A : "<<a<<" and B : "<<b<<endl;

    // REMEMBER : X^X = 0 and X^0 = X
}

int main(void){

    int n;
    cout<<"\nEnter first number : ";
    cin>>n;
    int m;
    cout<<"\nEnter second number : ";
    cin>>m;
    swap_numbers(m , n);
}