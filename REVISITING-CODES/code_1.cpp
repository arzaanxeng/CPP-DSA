// Largest Element in an array
#include<iostream>
#include<vector>
using namespace std;

void find_max(vector <int> & v){
    int n = v.size();
    int max = v[0];
    for(int i = 0 ; i < n ; i++){
        if(v[i] > max){
            max = v[i];
        }
    }
    cout<<"The maximum value in the whole array is : "<<max;
}

int main(void){
    int n;
    cout<<"Enter the number of elements required in the array: ";
    cin>>n;
    vector<int>v(n);
    cout << "Enter " << n << " elements:\n";
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }

    find_max(v);

}