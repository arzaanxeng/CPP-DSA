#include<iostream>
#include<vector>
using namespace std;

void f( int j , int dest , vector<int>& path ){
    if( j == dest ){
        for( int el : path) cout<<el<<" "; // The path could be of variable lengths
        cout<<endl;
        return;
    }

    if( j > dest ) return;

    // Jump of 1
    path.push_back(1);
    f(j+1 , dest , path);
    path.pop_back();

    // Jump of 2
    path.push_back(2);
    f(j+2 , dest , path);
    path.pop_back();
}

int main(void){
    vector<int>path;
    int jump = 0;
    int dest = 5;
    f(jump,dest,path);
}