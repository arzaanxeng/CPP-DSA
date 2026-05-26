// Fibonacci Sequence
// 0 1 1 2 3 5 8 ....

#include<iostream>
using namespace std;


/* # CODE 1
int main(void){
    cout<<"\n======== FIBONACCI SEQUENCE ========\n\n";
    int n;
    cout<<"Enter the number of terms u would like to print :";
    cin>>n;
    int first_term = 0 , second_term = 1 , next_term ;

    if(n==0) return first_term;
    if(n==1) cout<<first_term<<"  "<<second_term ;

    if(n>1){
        cout<<first_term<<"  "<<second_term <<"  " ;
        for(int i = 2 ; i <= n ;i++){
            next_term = first_term + second_term;
            first_term = second_term;
            second_term = next_term;
            cout<<next_term<<"  ";
        }
    }
return 0;
}*/

// # CODE 2
int fibonacci(int n) { 
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void){
    cout<<"\n======== FIBONACCI SEQUENCE ========\n\n";
    int n;
    cout<<"Enter the number of terms u would like to print :";
    cin>>n;
    for(int i = 0 ; i <= n ; i++){
        cout<<fibonacci(i)<<" ";
    }
}