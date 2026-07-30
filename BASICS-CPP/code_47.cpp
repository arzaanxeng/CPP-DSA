#include <iostream>
#include <bitset>
using namespace std;

int main(){
    // Setting the ith bit
    int n , k;
    cout<<"\n\nEnter a number : ";
    cin>>n;
    cout<<"\nWhich bit would u like to set ? "<<endl;
    cin>>k;
    int mask = 1 << k ;
    cout<<"The bit setting resulted into the number : "<<( mask | n);

}