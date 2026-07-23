// Big Number Summation
#include<iostream>
#include<string>
using namespace std;
int main(void){
    string s;
    cout<<"Enter the required number : ";
    cin>>s;
    int sum = 0;
    for(int i = 0 ; i < s.size() ; i++){
        sum += s[i] - '0';
    }
    cout<<sum;
}