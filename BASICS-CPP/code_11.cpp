/*#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    if(n == 0 || n == 1) return fact;
    if(n>1)
    fact = n*factorial(n-1);
    return fact;
}

int main(void){
    int n , r ;
    cout<<"===== WELCOME TO nCr CALCULATOR =====\n";
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<"The value of nCr is :"<<ncr<<endl;
    return 0;
}*/

// The above code would work for small numbers only

// The neat code
#include<iostream>
#include<cmath>
using namespace std;

int main(void){
    while(true){
    int n, r;
    char choice;
    cout<<"===== WELCOME TO nCr CALCULATOR =====\n";
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    // Using logarithms to calculate the value of factorials instead of recursion
    // log(n!) = log(1) + log(2) + ... + log(n)
    double log_ncr = 0;
    for(int i = 1; i <= n; i++) log_ncr += log(i);
    for(int i = 1; i <= r; i++) log_ncr -= log(i);
    for(int i = 1; i <= n-r; i++) log_ncr -= log(i);

    cout<<"The value of nCr is : "<<(long long)exp(log_ncr)<<endl;
    cout<<"\nWould you like to continue(y/n)?\n:-->";
    cin>>choice;
    if(choice == 'N' || choice == 'n' ){
        cout<<"Thank you for using the nCr calculator. Goodbye!";
        break;
    }
    else if(choice == 'Y' || choice == 'y') continue;
    else {
        cout<<"Invalid input! Exiting the program.";
        break;
    }
  }
}