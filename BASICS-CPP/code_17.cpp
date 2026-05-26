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

   swap(&a , &b);            // The addresses of variables are being passed from here ( pass by reference )
   cout<<"\nThe first number is now :"<<a<<endl;
   cout<<"The second number is now :"<<b<<endl;
}

/* -----> another way is :

using the values directly and use the temp variable within the scope of main
a = temp;
a = b;
b = temp;
a ---> b and b ---> a
*/