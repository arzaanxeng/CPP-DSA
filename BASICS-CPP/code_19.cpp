// ARMSTRONG NUMBER
#include<iostream>
using namespace std;

int power( int ld , int digit_count){
    int result = 1;
   for(int i = 1 ; i <= digit_count ; i++){
       result *= ld ;
   }
   return result;
}


int main(void){
    int n , ld , arm_number = 0, digit_count = 0;
    cout<<"Enter the required number :";
    cin>>n;
    int original_n = n;

    // Digit counts
    while(n>0){
        n =n /10;
        digit_count++;
    }
    // Analysis
    n = original_n;
    while(n > 0){
        ld = n%10 ;
        arm_number = power(ld , digit_count) + arm_number;
        n = n/10;
    }

   if (arm_number == original_n) {
        cout << "Yes, " << original_n << " is an Armstrong Number." << endl;
    } else {
        cout << "Not an Armstrong Number." << endl;
    }

    return 0;
}