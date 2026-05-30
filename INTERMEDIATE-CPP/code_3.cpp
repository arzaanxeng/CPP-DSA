#include<iostream>
using namespace std;
int main(void){
    string s;
    cout<<"Enter a string of format (eg : aaaabbbhhhxcccxxxoo) : ";
    cin>>s;
    int n = s.size(), i =0 ;
    while(i<n){
        int j = i , count = 0;
        while(j < n , s[i] == s[j]){
            count++;
            j++;
        }
        cout<<s[i]<<count;
        i = j;
    }
    
}