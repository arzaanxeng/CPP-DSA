// WORKING WITH POINTERS

#include<iostream>
using namespace std;

void swap(int *a , int *b){  // The parameters are pointing towards an integer
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void){
   int  a , b;
   cout<<"\n===== SWAPPING OF TWO NUMBERS =====\n";
   cout<<"Enter the value of the first number :";
   cin>>a;
   cout<<"Enter the value of the second number :";
   cin>>b;

   swap(&a , &b);            // The addresses of variables are being passed from here
   cout<<"\nThe first number is now :"<<a<<endl;
   cout<<"The second number is now :"<<b<<endl;
}