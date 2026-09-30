// Recursion 
#include<iostream>
#include<vector>
using namespace std;

// ZigZag
void zigzag( int n ){
    if( n == 0) return ;
    cout<<n<<endl;
    zigzag(n-1);
    if(n!=1)cout<<n<<endl;
}


int main(void){
    zigzag(10);
}