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

    
    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
             if( i == j) sum+= arr[i][j];
        }
    }
    cout<<"\nThe sum of the diagonal elemnts is :"<<sum;
    cout<<"\n\n";
return 0;
}