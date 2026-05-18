// PRINTING THE GREATEST OF THE THREE NUMBERS 
#include<iostream>
using namespace std;
int main(void){
    float a,b,c;
    char choice;
    while(true){
    cout<<"===== WELCOME TO FINDING THE GREATEST NUMBER PROGRAM ====="<<endl;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"Enter the third number :";
    cin>>c;
    if( (a > b) && (a > c)){
        cout<<"The greatest number among all the three numbers is : "<<a<<endl;
    }
    if( (c > b) && (c > b)){
        cout<<"The greatest number among all the three numbers is : "<<c<<endl;
    }
    if( (a < b) && (b > c)){
        cout<<"The greatest number among all the three numbers is : "<<b<<endl;
    }
    cout<<"Would you like to use the pprogram again(y/n) :";
    cin>>choice;
    if(choice == 'n' || choice == 'N') {
            cout << "Program exited successfully.";
            break;
    }
    }
    return 0;
}
