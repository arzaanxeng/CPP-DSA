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

    cout<<"The origninal array : \n";
    for(int i = 0 ; i<n ; i++){
        for(int k = 0 ; k<m ; k++){
            cout<<arr[i][k]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n\n";

    int start_row = 0  , start_column = 0 , end_row = n-1 , end_column = m-1 ;
    cout<<"The elemnts are printed in the spiral order ( clockwise ) followed by a snake in a matrix :\n";

    while( ( start_row <= end_row ) && ( start_column <= end_column ) ){
        for( int i = start_column ; i < end_column ; i++){
            cout<<arr[start_row][i]<<" ";
        }

        for( int j = start_row ; j < end_row ; j++){
            cout<<arr[j][end_column]<<" ";
        }

        for( int k = end_column ; k > start_column ; k-- ){
            cout<<arr[end_row][k]<<" ";
        }

        for( int l = end_row ; l > start_row ; l --){
            cout<<arr[l][start_column]<<" ";
        }

        start_column ++;
        start_row ++;
        end_row --;
        end_column --;
    }
return 0;
}