#include<iostream>
using namespace std;
// SUM OF DIGITS - II
int main(void){
    string s;
    cout<<"Enter the required digit :";
    getline(cin , s);
    int n = s.size() , sum = 0;
    for(int i= 0  ; i < n ; i++){
         sum += s[i] - 48; // USING THE CONCEPT OF ASCII VALUES TO TURN THE STRING INTO AN INTEGER
    }
    cout<<"\nThe sum of the digits in the number is : "<<sum;
}