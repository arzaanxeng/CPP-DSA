// Count Sort Application on Strings
#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s = "abdsnennwebdvenirjurhfukendsnjxn";
    int n = s.size();
    int freq[26] = {0};  // I made a mistake of not initialising it with 0 hahaha  
    for(int i = 0; i < n; i++) freq[s[i] - 'a']++; // Mapping a --> 0 , b --> 1 and etc
    for(int i = 25 ; i >= 0 ; i--) for(int j = 1 ; j <= freq[i]; j++) cout <<char(i+'a')<<" ";
    cout << endl;
    return 0;
}