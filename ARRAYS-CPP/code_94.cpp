// Cat and Dog
#include<iostream>
#include<vector>
using namespace std;

// The problem is solved keeping in mind that dog is sitting initially @ (0,0) on top left of the GRID !!!

void f( int n , int m , int i , int j , string& s){
    if( i == n || j == m ) return;
    if( i == n-1 && j == m-1){
        cout<<s<<endl;
        return;
    }

    // Right 
    s.push_back('R');
    f(n,m,i+1,j,s);
    s.pop_back();

    //Down
    s.push_back('D');
    f(n,m,i,j+1,s);
    s.pop_back();

}

int main(void){
    string path = "";
    // Grid Inputs 
    int n , m;
    cout<<"Enter the number of rows in the grid : ";
    cin>>n;
    cout<<"Enter the number of columns in the grid : ";
    cin>>m;
    int i = 0 , j = 0;
    f( n , m , i , j , path);

}