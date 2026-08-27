// Setting the Bit

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long unsettingBit(long long n , int k ){
    int mask = 1 << k;
    n = n & ~(mask);
    return n;
}


int main(void){
    long long n;
    int k;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"\nWhich bit whould You like to unset : ";
    cin>>k;

    long long ans = unsettingBit(n,k);
    cout<<"The " <<k<<" bit was unset and the number now is : "<<ans;
    return 0;
}
