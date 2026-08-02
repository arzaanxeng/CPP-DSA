// Check the number of set bits 
#include <iostream>
#include <bitset>
using namespace std;

void count_set_bits(int n){
    int count = 0;
    cout<<"\nOriginal Binary : "<< bitset<64>(n)<<endl;
    // Unsetting all the bits till we get 0 eventually ending up with counting all the bits 
    while( n != 0){
        count++;
        n = n & (n-1); // Removing the rightmost bit after ocunting it !
    }
    cout<<"\nThe number of set bits were : "<<count;
}

int main(void){
    while(true){
    long long n;
    cout<<"\nEnter a number : ";
    cin>>n;
    count_set_bits(n);
    }
}