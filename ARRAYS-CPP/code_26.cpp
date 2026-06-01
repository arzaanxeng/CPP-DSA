#include <cmath>
#include <iostream>
using namespace std;

void power(int n , float p){
    long long exact_ans = exp(p * log(n));
    int pn = round(exact_ans);
    cout<<"The rounded of required answer is : "<<pn;
}

int main(void){
    int n;
    float p;
    cout<<"Enter the required number : ";
    cin>>n; 
    cout<<"Enter the power to be raised on the number : ";
    cin>>p;

    power(n,p);
}