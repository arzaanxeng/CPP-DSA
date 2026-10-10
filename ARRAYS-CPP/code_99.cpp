// Embeddings 

#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

char getAlphabet( int n ) {
    return 'A' + n - 1;
}

void f( string &s , int idx  , string& path , vector<string>& ans ){
    if( idx == s.size() ){
        ans.push_back(path);
        return;
    }
    // Only 1 number was taken 
    int num1 = stoi(s.substr(idx,1));
    if( num1 > 0 && num1 < 10 ){
        char ch1 = getAlphabet(num1);
        path.push_back(ch1);
        f(s,idx+1,path,ans);
        path.pop_back();
    }

    // if 2 numbers was taken 
    if( idx + 1 < s.size() ){ // Makes sure that there are two digits available or not ?
    int num2 = stoi(s.substr(idx,2));
    if( num2 >= 10 && num2 <= 26 ){
        char ch2 = getAlphabet(num2);
        path.push_back(ch2);
        f(s,idx+2,path,ans);
        path.pop_back();
    }
  }
}


int main(void){
    string s ;
    cout<<"Enter the required number : ";
    cin>>s;
    if (s.empty()) return 0;
    string path = "";
    vector<string>ans;
    f(s,0,path,ans);
    for( string el : ans ) cout<<el<<"  ";

}