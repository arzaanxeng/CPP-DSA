// Sorting the vowels in a word

#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
#include <cctype> 
using namespace std;

string sortVowel(string& s){
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for( int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            lower[s[i] - 'a']++;
            s[i] = '#';
        }
    }

    for( int i = 0 ; i < s.size() ; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            upper[s[i] - 'A']++;
            s[i] = '#';
        }
    }

    string ans = "";
    for( int i = 0 ; i < 26 ; i++){
        char c = 'A' + i;
        while(upper[i]){
            ans += c;
            upper[i]--;
        }
    }

    for( int i = 0 ; i < 26 ; i++){
        char c = 'a' + i;
        while(lower[i]){
            ans += c;
            lower[i]--;
        }
    }
    int idx = 0;
    for( int i = 0 ; i < s.size() ; i++){
        if(s[i] == '#'){
            s[i] = ans[idx];
            idx++;
        }
    }
    return s;
}

int main(void){
    string s;
    cout << "Enter the required word : ";
    getline(cin, s);
    string ans = sortVowel(s);
    cout<<"\nThe Sorted Word is : "<<ans;
    return 0;
}

