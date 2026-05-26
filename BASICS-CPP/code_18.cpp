#include<iostream>
using namespace std;
int main(void){

    // A numbered inerted right angled triangle
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        int count = 1;
        for(int j = n - i ; j>= 1 ; j-- ){
            cout<<count;
            count++;
        }
        cout<<endl;
    }

    // A vertically standing mountain
    int m;
    cout<<"Enter the width of mountain ( half of the total width ): ";
    cin>>m;
    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i = 1 ; i <=n ; i++){
        for(int j = n - i ; j >= 1 ; j--){
            cout<<"*";
        }
        cout<<endl;
    }

    // A numbered crown
    int a;
    cout<<"Enter the number of rows : ";
    cin>>a;
    for(int i = 1 ; i <=a ; i++){
        int  count = i;

        for(int j =1 ; j <= i ; j++){
            cout<<j;
        }
        
        for(int k = (a-i) ; k >=1 ; k--){
            cout<<" ";
        }

        for(int k = (a -i) ; k >=1 ; k--){
                cout<<" ";
        }
       
        for(int l = 1 ; l <= i ; l++){
            cout<<count;
            count--;
        }
cout<<endl;
    }
 return 0;
}