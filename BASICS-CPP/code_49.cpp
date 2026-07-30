#include <iostream>
#include <bitset>
using namespace std;

int main(){
    // Unsetting the ith bit
    int n , k;
    cout<<"\n\nEnter a number : ";
    cin>>n;
    cout<<"\nWhich bit would u like to unset ? "<<endl;
    cout<<"Enter the required position : ";
    cin>>k;
    int mask = ~(1 << k) ;
    cout<<"The unsetting of the bit resulted into the number : "<<( mask & n);
    return 0;
}