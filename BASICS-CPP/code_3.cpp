#include<iostream>
using namespace std;
int main(void){
    int a , b;
    cout<<"Enter the COST PRICE : $";
    cin>>a;
    cout<<"Enter the SELLING PRICE : $";
    cin>>b;

    if(a>b){
        cout<<"Sorry! You have made a loss of $"<< a - b <<endl;
    }
    else if(b>a){
        cout<<"Yeah! You have made a profit of $"<< b-a <<endl;
    }
    else {
        cout<<"Neither profit nor gain";
    }
}