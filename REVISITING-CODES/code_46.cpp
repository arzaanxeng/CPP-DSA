/*
Given a string return the size of last word only without containing an trailing spaces !
*/
#include<iostream>
#include<string>
using namespace std;
int lastWord( const string&  s){
    int count = 0 , j = s.size() - 1;
    while( j >= 0 && s[j] == ' ') j--;
    for( int i = 0 ; i <= j ; i++){
        if(s[i] == ' ') count = 0;
        else count++;
    }
    return count;
}

int main(void){
    string s = "   Hi I am Arzaan and I      like    AI and ML      ";
    int ans = lastWord(s);
    cout<<"The length of the last word is : "<<ans;
}