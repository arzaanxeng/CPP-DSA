// Finding the last true
// EXAMPLE : "FFFFFFFTTTTTTTTTTTTT"
#include<iostream>
#include<string>
using namespace std;
int main(void){
    string s = "FFFFFFFFFTTTTTTTTTTTTT";
    int l = 0 , r = s.size() - 1 , ans = -1 ;
    while( l <= r){
        int m = l + (r-l)/2;
        if(s[m] == 'T'){
            ans = m;
            l = m+1;
        }
        else l = m+1;
    }
    if (ans == -1 ) cout << "No 'T' found in the string\n";
    else cout << "The last true value is at index: " << l << "\n";
}