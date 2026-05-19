#include<iostream>
using namespace std;
int main(void){
    // Display the AP:-> 1,3,5,7,9...
    // Display the GP;-> 3,12,48....
    int n , m;
    cout<<"Enter the number of required terms u would like to display for AP: ";
    cin>>n;
    cout<<"Enter the number of required terms u would like to display for GP: ";
    cin>>m;
    // An = a + (n-1)d ---> 1 + (n-1)2 = 2*n - 1
    cout<<"The required Arithematic Progression is :"<<endl;
    for(int i = 1 ; i <= (2*n - 1); i+=2 ){
      cout<<i<<" ";
    }
    cout<<"\n"<<endl;
    cout<<"The required Geometric Progression is :"<<endl;
    for(int i =3 ; i <=3*pow(4 , m)-1 ; i = i*4){
        cout<<i<<" ";
    }
}