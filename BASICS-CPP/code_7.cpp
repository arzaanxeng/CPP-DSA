
#include<iostream>
using namespace std;
int main(void){
int n ;
   // SUM OF THE DIGITS OF A NUMBER
   cout<<"=== SUM OF THE DIGITS OF A NUMBER ==="<<endl;
   cout<<"Enter the required number: ";
   cin>>n;
   int sum = 0;
   int n_temp = n;
   while(n > 0){
   sum = sum + n%10;
   n = n/10;
   }
   cout<<"The sum of the digits of the number is :"<<sum<<endl;

   // REVERSING THE NUMBER
   int reversed_number = 0 , r;
   cout<<"\n=== REVERSE OF THE NUMBER ==="<<endl;
   while(n_temp >0){
    r = n_temp%10;
    reversed_number = (reversed_number*10) + r;
    n_temp = n_temp/10;
   }
   cout<<"The reversed number is :"<<reversed_number;

} 