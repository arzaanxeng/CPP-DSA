// DNF Algorithm
#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    cout<<"===================  DUTCH NATIONAL FLAG ALGORITHM  =================== "<<endl;
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> v[i];
    }
    
    int l = 0, i = 0 ,r = n - 1;
    // {0,1,0,1,2,0,2,1,1,0,2}
    while( i <= r ){
        if(v[i] == 0){
            swap(v[i] , v[l]);
            l++;
            i++;
        }
        else if ( v[i] == 1){
            i++;
        }
        else{
            swap(v[i] , v[r]);
            r--;
        }
    }

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}