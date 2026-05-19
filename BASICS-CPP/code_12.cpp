// PRINTING A RECTANGLE OF STARS
#include<iostream>
using namespace std;
int main(void){
//     int n , m;
//     cout<<"\n===== WELCOME TO STAR RECTANGLE PRINTER =====\n";
//     cout<<"Enter the number of rows : ";
//     cin>>n;
//     cout<<"Enter the number of columns : ";
//     cin>>m;
//     for(int i = 1 ; i<= n ; i++){
//         for(int j=1 ; j<=m ; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     // PRINTING A RIGHT ANGLED TRIANGLE OF STARS
//     cout<<"\n";
//     int a ;
//     cout<<"===== WELCOME TO STAR RIGHT ANGLED TRIANGLE PRINTER =====\n";
//     cout<<"Enter the number of rows : ";
//     cin>>a;
//     for(int i =1 ; i<= a ; i++){
//         for(int j =1 ; j<=i ; j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }

//     // PRINTING AN INVERTED RIGHT ANGLED TRIANGLE OF STARS
//     cout<<"\n";
//     int b ;
//     cout<<"===== WELCOME TO STAR INVERTED RIGHT ANGLED TRIANGLE PRINTER =====\n";
//     cout<<"Enter the number of rows : ";
//     cin>>b;
//     for(int i = 1 ; i <=b ; i++){
//         for(int j = b ; j>=i ; j--){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }

    // PRINTING FLIPPED SIMPLE PYRAMID OF STARS
    cout<<"\n";
    int c ;
    cout<<"===== WELCOME TO STAR FLIPPED SIMPLE PYRAMID PRINTER =====\n";
    cout<<"Enter the number of rows : ";
    cin>>c;
    for(int i = 1 ; i <= c ; i++){
        for(int j = 1 ; j <= c-i ; j++){
            cout<<" ";
        }
        for(int k = 1; k<= i ; k++){
            cout<<"*";
        }
        cout<<"\n";
    }

    // PRINTING INVERTED FLIPPED SIMPLE PYRAMID OF STARS
    cout<<"\n";
    int d ;
    cout<<"===== WELCOME TO STAR INVERTED FLIPPED SIMPLE PYRAMID PRINTER =====\n";
    cout<<"Enter the number of rows : ";
    cin>>d;
    for(int i = 1 ; i <= d ; i++){
        for(int j =1 ; j<= i ; j++){
            cout<<" ";
        }
        for(int k = d ; k >= i ; k--){
            cout<<"*";
        }
        cout<<"\n"; 
    }
    return 0;
}