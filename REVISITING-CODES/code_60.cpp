// Power of 2 or not ?

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool powerOf2(long long n ){
    if (n <= 0) return true;
    return (n&(n-1)) != 0 ;
}


int main(void){
    long long n;
    cout<<"Enter the number : ";
    cin>>n;
    bool ans = powerOf2(n);
    if(ans)cout<<"The number is not a power of 2 ";
    else cout<<"Yes, it is a power of 2";
    return 0;
}
