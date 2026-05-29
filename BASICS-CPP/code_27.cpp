#include<iostream>
#include <string>
using namespace std;
// Count the number of words in a line
int main(void){
    string s;
    cout<<"Enter a full scentence : ";
    getline(cin , s);
    int count = 0 ,  n = s.size();
    for(int i = 0 ; i < n ; i++ ) if( s[i] == ' ') count++;

    cout<<"The number of words in the scentence are : "<<(count + 1);
    return 0;
}