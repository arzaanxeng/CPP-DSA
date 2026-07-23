// Printing all the Sub-Arrays

#include<iostream>
#include<vector>
using namespace std;
int main(void){
    int n ;
    cout<<"Enter the number of elements in the vector : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }

    for(int l = 0 ; l < n ; l++){
        for(int r = l ; r < n ; r++){
            for( int i = l ; i <= r ; i++){
                cout<<v[i]<< " ";
            }
            cout<<endl;
        }
    }
}