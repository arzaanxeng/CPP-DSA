// UnSetting the Rightmost Bit

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long unsettingBit(long long n ){
    return n&(n-1);
}


int main(void){
    long long n;
    cout<<"Enter the number : ";
    cin>>n;
    long long ans = unsettingBit(n);
    cout<<"The rightmost bit was unset and the number now is : "<<ans;
    return 0;
}
