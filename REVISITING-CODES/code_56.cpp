// Bit Set or Unset

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkBitSetUnset(int n , int k ){
    int mask = 1 << k;
    return (n & (mask)) != 0 ; // Do not use " == 1 " as you would not get 1 as an output --> Error s
}


int main(void){
    int n,k;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"\nWhich bit whould You like to see the status of ? ";
    cin>>k;

    bool ans = checkBitSetUnset(n,k);
    if(ans) cout<<"The bit is Set";
    else cout<<"The bit is Unset";
    return 0;
}
