#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(void){
    string s1 = "125";
    string s2 = "435";
    int x = 0 , y = 0;
    for( int i = 0 ; i < s1.size() ; i ++) x = 10*x + (s1[i] - '0');
    for( int i = 0 ; i < s2.size() ; i ++) y = 10*y + (s2[i] - '0');
    cout<<"The sum is : "<<(x+y);
    return 0;
}