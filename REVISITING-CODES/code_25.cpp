// CARRY FORWARD TECHNIQUE
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }

    cout<<"\nSummation values are listed below : \n";
    for ( int l = 0 ; l < n ; l++){
        int add = 0;
        for(int r = l ; r < n ; r++){
            add += v[r];
            cout<<add<<"   ";
        }
        cout<<endl;
    }
}