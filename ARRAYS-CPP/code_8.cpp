#include<iostream>
using namespace std;
int main(void){
    int n, m;
    cout<<"Enter the number of rows :";
    cin>>n;
    cout<<"Enter the number of columns :";
    cin>>m;

    int arr[n][m];
    for(int i = 0 ; i<n ; i++){
        for(int k = 0 ; k<m ; k++){
            cout<<"Enter the value of "<<i<<" row and "<<k<<" column :";
            cin>>arr[i][k];
        }
        cout<<endl;
    }

    for(int i = 0 ; i<n ; i++){
        for(int k = 0 ; k<m ; k++){
            cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Printing the elemnts of 2-D array in wave form
    for(int i = 0 ; i<n ; i++){
        for(int k = 0 ; k<m ; k++){
            if( i%2 == 0 )cout<<arr[i][k]<<" ";
            else cout<<arr[i][m-k-1]<<" ";
        }
        cout<<endl;
    }
    return 0;
}