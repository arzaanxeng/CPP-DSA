#include<iostream>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the required number : ";
    cin>>n;
    if (n == 0){
    cout<<"Neither odd nor even";
    }
    else if(n%2 != 0){
        cout<<"The number entered "<<n<<" is odd";
    }
    else if ( n%2 == 0){
        cout<<"The number entered "<<n<<" is even";
    }
    else {
        cout<<"The number entered is not correct ";
    }
    return 0;
}