#include<iostream>
using namespace std;
// ROTATING THE MATRIX BY 90 DEGREE CLOCKWISE
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
 
    cout<<"The 90 degree clockwise rotated array : \n";

    for(int i = 0 ; i < n ; i++){
        for(int j = (m-1) ; j >= 0 ; j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}