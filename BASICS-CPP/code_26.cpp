#include<iostream>
using namespace std;
// Reverse a string
int main(void){
    string s;
    cout<<"Enter the word :";
    cin>>s;
    int n = s.size();
    string r = "";
    
    for( int i = 0 ; i < n ; i++){
         r += s[n-i-1];
    }
    cout<<"\nThe reversed string is :"<<r;

}