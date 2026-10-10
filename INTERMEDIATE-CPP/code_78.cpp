// Keypad Combinations
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

map<char, string> keypad = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

void f(int idx , string& s , string& path){

    if( idx == s.size() ){
        for( char el : path ) cout<<el;
        cout<<endl;
        return;
    }

    char digit = s[idx];
    string choices = keypad[digit];

    for( char choice : choices ){
        path += choice;
        f(idx+1,s,path);
        path.pop_back();
    }

}

int main(void){
    string s ;
    cout<<"Enter the required input : ";
    cin>>s;
    string path;
    f(0,s,path);
}
