#include<iostream>
using namespace std;
int main(void){
    // PRINTING A TRIANGLE
    int n;
    cout<<"\n===== WELCOME TO STAR TRIANGLE PRINTER =====\n";
    cout<<"Enter the number of rows : ";
    cin>>n;
    for( int i = 1 ; i <=n ; i++){
        for(int j = n-1 ; j>=i ; j--){
            cout<<" ";
        }
        for(int k =1 ; k <=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n";
    // PRINTING AN INVERTED TRIANGLE
    int m;
     cout<<"\n===== WELCOME TO STAR INVERTED TRIANGLE PRINTER =====\n";
    cout<<"Enter the number of rows : ";
    cin>>m;
    for( int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j<=i ; j++){
            cout<<" ";
        }
        for(int k =m ; k >=i ; k--){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n";
    // PRINTING A TRIANGLE WITH APEX ALONG THE +X AXIS
    int p;
    cout<<"\n===== WELCOME TO STAR TRIANGLE WITH APEX ALONG THE +X AXIS PRIINTER =====\n";
    cout<<"Enter the number of rows for semi vertex angle : ";
    cin>>p;
    for(int i =1 ; i<= p ; i++){
        for(int j = 1 ; j<= i ; j++){
            cout<<"* ";
        }
    cout<<"\n";
    }

    for(int i = 1 ; i<= p ; i++){
        for(int k = p-1 ; k>= i ; k--){
            cout<<"* ";
        }
    cout<<"\n";
    }

    cout<<"\n";
    // PRINTING A DIAMOND
    int q;
    cout<<"\n===== WELCOME TO STAR DIAMOND PRIINTER =====\n";
    cout<<"Enter the number of rows in upper apex of diamond : ";
    cin>>q;
        for( int i = 1 ; i <=q ; i++){
        for(int j = q-1 ; j>=i ; j--){
            cout<<" ";
        }
        for(int k =1 ; k <=i ; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
        for( int i = 1 ; i <=q ; i++){
        for(int j = 1 ; j<= i ; j++){
            cout<<" ";
        }
        for(int k =q-1 ; k >=i ; k--){
            cout<<"* ";
        }
        cout<<endl;
    }
}