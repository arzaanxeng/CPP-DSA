// Pascal Triangle
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    if(n == 0 || n == 1) return fact;
    if(n>1)
    fact = n*factorial(n-1);
    return fact;
}

int main(void){
    int n , nci;
    cout<<"Enter the number of rows: ";
    cin>>n;

    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j<= i ; j++){
             nci = factorial(i)/(factorial(j)*factorial(i-j));
             cout<<nci<<" ";
        }
    cout<<endl;
    }
    
    
    return 0;
}

