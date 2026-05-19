#include<iostream>
using namespace std;

int main(void){
    int n;
    cout << "Enter how many prime numbers you would like to print: ";
    cin >> n;
    if (n <= 0) 
    cout<<"Please enter a natural number!";

    cout << "The first " << n << " prime numbers are: \n";
    int count = 0; 
    int i = 2;    
    while(count < n){
        bool flag = true; // Assuming the number is prime
        for( int j = 2 ; j < i ; j++){
            if(i%j == 0){
                flag = false;
                break;
            }
        }
        if(flag == true){
            cout<<i<<' ';
            count++;
        }
        i++;
    }
    return 0;
}


  