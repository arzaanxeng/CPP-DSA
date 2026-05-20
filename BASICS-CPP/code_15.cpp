#include<iostream>
using namespace std;
int main(void){
    // PRINTING A SIMPLE DISPLACED PYRAMID
    int n;
    cout<<"Enter the number of rows :";
    cin>>n;
    for(int i =1 ; i<=n ; i++){
        for(int k = 1 ; k <= i -1 ; k++ ){
            cout<<" ";
        }
        for(int j = 1 ; j<= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"\n";
    // PRINTING A HOLLOW ARROW POINTING TOWARDS +X-AXIS
    int m;
    cout<<"Enter the number of rows ( half arrow ) :";
    cin>>m;
        for(int i =1 ; i<=m ; i++){
        for(int k = 1 ; k <= i -1 ; k++ ){
            cout<<"  ";
        }
        for(int j = 1 ; j<= i ; j++){
            if( (j == 1) || (i == j)) cout<<"> ";
            else cout<<"  ";
        }
        cout<<endl;
    }

        for(int i = m - 1 ; i>= 1 ; i--){
        for(int k = 1 ; k <= i-1 ; k++ ){
            cout<<"  ";
        }
        for(int j = 1 ; j<= i ; j++){
            if( (j == 1) || (i == j)) cout<<"> ";
            else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"\n";
    // PRINTING A STAIRCASE
    int a;
    cout<<"Enter the number of steps :";
    cin>>a;
    for(int i =1 ; i <= 2*a ; i++){
        for(int j =1 ; j <= 2*i ; j++){
            cout<<"*";
        }
        if(i%2==0)cout<<endl;
    }
 }
