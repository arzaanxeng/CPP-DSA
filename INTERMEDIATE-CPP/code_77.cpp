#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f( int open , int close , int n , string& path ){
    if( path.size() == 2*n ){
        for( char el : path ) cout<<el;
        cout<<endl;
        return;
    }

    // Open 
    if( open < n ){
    path += "(";
    f(open+1,close,n,path);
    path.pop_back();
    }

    // Close
    if( open > close ){
    path += ")";
    f(open,close+1,n,path);
    path.pop_back();
    }

}

// Gnerate Parantheses
int main(void){
    int n ;
    cout<<"Enter the number of required parantheses : ";
    cin>>n;
    string path ;
    f(0,0,n,path);
    return 0;
}