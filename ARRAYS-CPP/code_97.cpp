#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f(int open , int close , int n , string& path , vector<string>& ans ){
    if( path.length() == 2*n ){
        ans.push_back(path);
        return;
    }

    // Opening Bracket Case
    if( open < n ){
    path += "(";
    f(open+1,close,n,path,ans);
    path.pop_back();
    }

    // Closing Bracket Case
    if( open > close ){
    path += ")";
    f(open,close+1,n,path,ans);
    path.pop_back();
    }
}

int main(void){
    
    int n;
    cout<<"Enter the number of parantheses: ";
    cin>>n;
    string path = "";
    vector<string> ans ;
    f(0,0,n,path,ans);
    for( string el : ans ) cout<<el<<"  ";
}