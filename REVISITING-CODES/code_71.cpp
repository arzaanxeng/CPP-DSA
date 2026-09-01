// Tower Hanoi
#include <iostream>
using namespace std;

void TOH(int n , char src , char aux , char dest ){
    if(n==0) return;
    TOH( n-1 , src , dest , aux);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TOH( n-1 , aux , src , dest);
}

int main(void){
    TOH(3,'A','B','C');
}