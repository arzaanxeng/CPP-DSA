#include <iostream>
#include <bitset>
using namespace std;

int main(){
    // Toggling the ith bit
    int n , k;
    cout<<"\n\nEnter a number : ";
    cin>>n;
    cout<<"\nWhich bit would u like to toggle ? "<<endl;
    cout<<"Enter the required position : ";
    cin>>k;
    int mask = 1 << k ;
    cout<<"The toggling of the bit resulted into : "<<( mask ^ n);

}