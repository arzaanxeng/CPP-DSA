// Sorting the vowels in a word

#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

#include <cctype> 

bool isVowel(char ch) {
    ch = tolower(static_cast<unsigned char>(ch));
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// This is the wrong approach I used !!
// void sortVowel(const string& s){
//     unordered_map<int,char>m;
//     string ans = "";
//     for( int i = 0 ; i < s.size() ; i++) if(isVowel(s[i])) m[i] = s[i];
//     for( int i = 0 ; i < s.size() ; i++){
//         if(m.find(i) != m.end()){
//             ans += m[i];
//         }
//         else ans += s[i];
//     }
//     cout<<ans;
// }

void sortVowel(const string& s){
    vector<char>vowels;
    for( int i = 0 ; i < s.size() ; i++) if(isVowel(s[i])) vowels.push_back(s[i]);
    sort(vowels.begin() , vowels.end());
    int idx = 0 ;
    string ans = "";
    for( int i = 0 ; i < s.size() ; i++ ){
        if(isVowel(s[i])) ans += vowels[idx++];
        else ans += s[i];
    }
    cout<<ans;
}

int main(void){
    string s;
    cout << "Enter the required word : ";
    getline(cin, s);
    sortVowel(s);
    return 0;
}