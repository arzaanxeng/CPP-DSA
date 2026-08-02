// Find Single Number 1
#include <iostream>
#include <bitset>
using namespace std;
int main(void){
    vector<int>v = {7,2,2,3,3,8,8,9,9,5,5}; // The id cannot be zero
    int ans = 0;
    for( auto i : v ){
        ans = ans^i;
    }
    if(ans == 0) cout<<"No Imposter is Present";
    else cout<<"The ID of the Single Person is : "<<ans;
    return 0;
}