#include<iostream>
using namespace std;
int main(void){
    float a,b,c;
    char choice;

while(true){
    cout<<"====== WELCOME TO TRIANGLE VALIDITY PROGRAM ====="<<endl;
    cout<<"Enter the value of first side :";
    cin>>a;
    cout<<"Enter the value of second side :";
    cin>>b;
    cout<<"Enter the value of third side :";
    cin>>c;
    
    if ( (a+b)>c && (b+c) >a && (a+c)>b){
        cout<<"YES , These numbers would form a valid triangle."<<endl;
        if ((a*a + b*b == c*c ) || ( c*c + b*b == a*a ) || ( c*c + a*a == b*b ))
        cout<<"These numbers could also form a right triangle";
    }
    else
       cout<<"NO , These numbers would not form  a valid triangle.";
    
    cout<<"\nWould u like to use the program again ( y/n ) :";
    cin>>choice;
    if(choice == 'n' || choice == 'N') {
            cout << "Program exited successfully.";
            break;
    }
}
    return 0;
}