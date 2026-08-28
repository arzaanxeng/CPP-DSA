// Count Number of Set Bits

#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int count = 0;

    while(n!=0){
        n = n&(n-1);
        count++;
    }
    cout<<"The number of set bits are : "<<count;
}
