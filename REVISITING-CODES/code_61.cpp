// Swap Two Numbers

#include <iostream>
using namespace std;


void swap(int &a, int &b) {
        a = a^b;
        b = b^a;
        a = a^b;
    
    cout<<"\n---------\n";
    cout<<"\nA = "<<a;
    cout<<"\nB = "<<b;
    return;
}


int main(void){
    int a , b;
    cout<<"Enter the value of A : ";
    cin>>a;
    cout<<"Enter the value of B : ";
    cin>>b;
    swap(a,b);

}
