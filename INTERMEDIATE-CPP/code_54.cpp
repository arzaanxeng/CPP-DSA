/*
Given a valid (IPv4) IP address, return a defanged version of that IP address.
A defanged IP address replaces every period "." with "[.]".

Example 1:
Input: address = "1.1.1.1"
Output: "1[.]1[.]1[.]1"

Example 2:
Input: address = "255.100.50.0"
Output: "255[.]100[.]50[.]0"
*/
#include<iostream>
#include<string>
using namespace std;

string defangedAddress(const string& s ){
    string ans ;
    for( int i = 0 ; i < s.size() ; i++){
        if(s[i] == '.') ans += "[.]";
        else ans += s[i];
    }
    return ans;
}


int main(void){
    string address = "255.100.50.0";
    string ans = defangedAddress(address);
    cout<<"The defanged address is : "<<ans;
    return 0;
}