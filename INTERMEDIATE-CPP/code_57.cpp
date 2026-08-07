// SORTING A STRING IN TC : O(N)
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void sortString(const string& s){
    vector<int>v(26,0);
    for( int i = 0 ; i < s.size() ; i++) v[s[i]-'a'] ++;
    string ans = "";
    for( int i = 0 ; i < v.size() ; i++){
        char c = i + 'a';
        while(v[i] > 0){
            ans += c;
            v[i] --;
        }
    }
    cout<<ans;
}

int main(void){
    string s;
    cout<<"Enter the required word : ";
    cin>>s;
    sortString(s);
}