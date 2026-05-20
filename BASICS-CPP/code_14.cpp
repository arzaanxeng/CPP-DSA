#include<iostream>
using namespace std;
int main(void){
    // PRINTING SIMPLE NUMBER PYRAMID
    int n;
    cout<<"=== WELCOME TO SIMPLE NUMBER PYRAMID PRINTER ===\n";
    cout<<"Enter the number of rows: ";
    cin>>n;
    int count = 1;
    for(int i =1 ; i<=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
    cout<<"\n";
    // PRINTING ROTATED NUMBER PYRAMID ( VALID TILL N = 5)
    int m;
    cout<<"=== WELCOME TO ROTATED NUMBER PYRAMID PRINTER ===\n";
    cout<<"Enter the number of rows: ";
    cin>>m;
    for(int i = 1; i <= m ; i++){
        for(int j = m -1 ; j>= i ; j--){
            cout<<" ";
        }
        for(int k = 0 ; k< i ; k++){
            cout<< (k + i);
        }
        cout<<endl;
    }
    cout<<"\n";
    // PRINTING A NUMBERED TRIANGLE
    int p;
    cout<<"=== WELCOME TO NUMBERED TRIANGLE PRINTER ===\n";
    cout<<"Enter the number of rows: ";
    cin>>p;
    for(int i = 1; i<=p ; i++){
        for(int j =1 ; j<= p-i ; j++){
            cout<<" ";
        }
        for(int k =1 ; k<= i ; k++){
            cout<<k;
        }
        for(int l = i - 1 ; l >= 1 ; l--){
            cout<<l;
        }
        cout<<endl;
    }

    cout<<"\n";
    // PRINTING A HOLLOW DIAMOND 

    int q;
    cout << "Enter the rows in diamond (half-height): ";
    cin >> q;

    // TOP HALF (Including the center row)
    for (int i = 1; i <= q; i++) {
        // 1. Print leading spaces
        for (int j = 1; j <= q - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            // ONLY print a star at the boundaries
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " "; 
            }
        }
        cout << endl;
    }

    // BOTTOM HALF (Inverted logic)
    for (int i = q - 1; i >= 1; i--) {
        for (int j = 1; j <= q - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " "; 
            }
        }
        cout << endl;
    }
    return 0;
}
