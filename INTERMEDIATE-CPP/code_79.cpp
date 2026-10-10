// Embeddings 
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

char getAlphabets( int n ) {return 'A' + n - 1;}

void f( int idx , string& s,  vector<char>& path ){

    if( idx == s.size() ){
        for( char el : path ) cout<<el;
        cout<<endl;
        return;
    }

    // Number taken were only 1
    int num1 = stoi(s.substr(idx,1));
    if( num1 > 0  && num1 < 10 ){
    path.push_back(getAlphabets(num1));
    f(idx+1,s,path);
    path.pop_back();
    }

    // 2 Numbers were taken
    if( idx + 1 < s.size() ){
        int num2 = stoi(s.substr(idx,2));
        if( num2 <= 26 and num2 >= 10 ){
        path.push_back(getAlphabets(num2));
        f(idx+2,s,path);
        path.pop_back();
        }
    }

}

int main(void){
    string s;
    cout<<"Enter the required number : ";
    cin>>s;
    if(s == "0" || s.empty()) return 0;
    vector<char>path;
    f(0,s,path);
}