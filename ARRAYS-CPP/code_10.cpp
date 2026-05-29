#include<iostream>
using namespace std;
int main(void){
    /*FINDING THE MAXIMUM ELEMENT IN THE MATRIX

    1 2 3
    4 5 6
    7 8 9

    --> 9
    */ 
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
            cout<<arr[i][k]<<"    ";
        }
        cout<<endl;
    }

    int MAX = arr[0][0];
    for(int i = 0 ; i<n ; i++){
    for(int k = 0 ; k<m ; k++){
        if( arr[i][k] > MAX) MAX = arr[i][k];
         }
    }
    cout<<"\nThe maximum element in the matrix is :"<<MAX;
      
    cout<<"\n\n";

    int MIN = arr[0][0];
    for(int i = 0 ; i<n ; i++){
    for(int k = 0 ; k<m ; k++){
        if( arr[i][k] < MIN) MIN = arr[i][k];
         }
    }
    cout<<"\nThe minimum element in the matrix is :"<<MIN;


    return 0;
}