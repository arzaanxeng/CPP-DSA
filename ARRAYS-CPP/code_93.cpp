#include<iostream>
#include<vector>
using namespace std;

void f( int j , int dest , int k ,  vector<int>& path ){
    if( j == dest ){
        for( int el : path) cout<<el<<" "; // The path could be of variable lengths
        cout<<endl;
        return;
    }

    if( j > dest ) return;

    // Multiple Paths created using loops for number of steps varying from [1,k]
    for( int i = 1 ; i <= k ; i++){
        path.push_back(i);
        f(j+i , dest , k , path);
        path.pop_back();
    }

}

int main(void){
    vector<int>path;
    int jump = 0;
    int dest = 5;
    int max = 5;
    f(jump,dest,max,path);
}