// ROMAN TO INTEGER


#include<iostream>
#include<string>
using namespace std;

int value(char& c){
    if( c == 'I') return 1;
    else if( c == 'V') return 5;
    else if( c == 'X') return 10;
    else if( c == 'L') return 50;
    else if( c == 'C') return 100;
    else if( c == 'D') return 500;
    else if( c == 'M') return 1000;
    return 0;
}

long long romanToInt(string& s){
    long long ans = value(s[0]);
    for( int i = 1 ; i < s.size() ; i++){
        if(value(s[i-1]) >= value(s[i])) ans += value(s[i]);
        else ans += (value(s[i]) - 2 * value(s[i-1]));;
    }
    return ans;
}

int main(void){
    string s;
    cout << "Enter the required roman numeral ( no spaces ): ";
    getline(cin, s);
    long long ans = romanToInt(s);
    cout<<"The number corresponding to this roman numeral is : "<<ans;
    return 0;
}

