// KMP ALGORITHM
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int lps( string& s){
    vector<int>lps(s.size(),0);
    int pref = 0 , suf = 1;

    while( suf < s.size() ){
        if(s[suf] == s[pref]){
            lps[suf] = pref + 1;
            pref++;
            suf++;
        }
        else{
            if( pref == 0){
                lps[suf] = 0;
                suf++;
            } 
            else{
                pref = lps[pref-1];
            }
        }
    }
    return lps[s.size()-1];
}

int main(void){
    string s = "ABCBADABABABAABABCBAD";
    int ans = lps(s);
    cout<<ans;
}
