// Check wether a number is odd or even 
#include <iostream>
#include <bitset>
using namespace std;

// void odd_even(int n){
//     // Why this is wrong ? -> Because it is checking wether th enumber is power of 2 not numbers like 6,10 --> they would be classified as odd
//     cout << "\nOriginal Binary : " << bitset<64>(n) << endl;
//     if((n&(n-1)) == 0 ){
//         cout<<"\nThe number is even !";
//     }
//     else{
//         cout<<"\nThe number is odd !";
//     }
// }

void odd_even(int n) {
    cout << "\nOriginal Binary : " << bitset<64>(n) << endl;
    // All the odd numbers have 0th bit set so if we perform & operation with it we can figure out the nature of the number
    if ((n & 1) == 0) {
        cout << "The number is even!";
    } else {
        cout << "The number is odd!";
    }
}

int main(void){
    while(true){
    long long n;
    cout<<"\nEnter a number : ";
    cin>>n;
    odd_even(n);
    }
}