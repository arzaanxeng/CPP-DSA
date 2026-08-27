// Setting the Bit

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long checkBitSetUnset(long long n , int k ){
    int mask = 1 << k;
    n = n | mask;
    return n;
}


int main(void){
    long long n;
    int k;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"\nWhich bit whould You like to set : ";
    cin>>k;

    long long ans = checkBitSetUnset(n,k);
    cout<<"The " <<k<<"th bit was set and the number now is : "<<ans;
    return 0;
}
