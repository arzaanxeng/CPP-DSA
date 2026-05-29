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
            cout<<arr[i][k]<<"    ";
        }
        cout<<endl;
    }

    // Printing the maximum element in each column
    for(int k = 0 ; k<m ; k++){
        int MAX = arr[0][k];
        for(int i =0 ; i <n ; i++){
            if( arr[i][k] > MAX ) MAX = arr[i][k];
        }
        cout<<"\nThe maximum element in the "<<k<<" column is :"<<MAX;
    }
    cout<<"\n\n";

    // Printing the minimum element in each column
    for(int k = 0 ; k<m ; k++){
        int MIN = arr[0][k];
        for(int i =0 ; i <n ; i++){
            if( arr[i][k] < MIN ) MIN = arr[i][k];
        }
        cout<<"\nThe minimum element in the "<<k<<" column is :"<<MIN;
    }
    cout<<"\n\n";

    return 0;
}