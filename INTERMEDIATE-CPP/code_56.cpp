/*
A pangram is a sentence where every letter of the English alphabet appears at least once.
Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

CONSTRAINTS :-
1 <= sentence.length <= 1000
Sentence consists of lowercase English letters.
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool checkPangram( const string& s ){
    vector<bool>ans(26,0);
    for( int i = 0 ; i < s.size() ; i++) ans[s[i] - 'a'] = 1;
    for( int el : ans ) if( el == 0 ) return false;
    return true;
}

int main(void){
    string s;
    cout<<"Enter the required sentence : ";
    getline( cin , s);
    bool ans = checkPangram(s);
    if(ans) cout<<"YES , the scentence is a Pangram.";
    else cout<<"NO, the sentence is not a Pangram.";
}
