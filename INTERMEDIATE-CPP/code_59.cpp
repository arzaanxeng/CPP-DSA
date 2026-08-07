// Sorting the sentence 
#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

void sortSentence(const string& s){
   unordered_map<int,string>m;
   string str = "";
   for( int i = 0 ; i < s.size() ; i++){
    if(s[i] == ' '){
        int pos = str.back() - '0';
        str.pop_back();
        m[pos] = str;
        str = "";
    }
    else str += s[i];
   }

   if(!str.empty()){
        int pos = str.back() - '0';
        str.pop_back();
        m[pos] = str;   
   }

   for( int i = 1 ; i <= m.size() ; i++){
    cout<<m[i];
    if(i != m.size()) cout<<" "; // This is done to avoid printing trailing spaces !!! -> very imp for CP
   }
   return;
}

int main(void){
    string s;
    cout << "Enter the required word : ";
    getline(cin, s);
    sortSentence(s);
    return 0;
}