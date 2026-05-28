#include<iostream>
using namespace std;
int main(void){
    // Printing a butterfly
    int n;
    cout<<"Enert the width of half wing of butterfly in terms of number of rows: ";
    cin>>n;
    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        for(int k = (n -i) ; k >= 1 ; k--){
            cout<<" ";
        }

        for(int j = n - i ; j >= 1 ; j--){
        cout<<" ";
        }
        for(int k =1 ; k<= i ; k++){
        cout<<"*";
         }
    cout<<endl;
}

        for(int i = n ; i >= 1 ; i--){
        for(int j = 1 ; j <= i ; j++){
            cout << "*";
        }
        for(int k = (n - i) ; k >= 1 ; k--){
            cout << " ";
        }
        for(int j = n - i ; j >= 1 ; j--){
            cout << " ";
        }
        for(int k = 1 ; k <= i ; k++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}