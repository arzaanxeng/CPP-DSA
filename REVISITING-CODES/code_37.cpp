// Maximum Product in a Sub-Array
#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> v[i];
    }
    int prod = 1 , ans = INT_MIN;
    for( int i = 0 ; i < n ; i++){
        prod *= v[i];
        ans = max(ans , prod);
    }
    cout<<"The maximum product in a sub_array is equal to : "<<ans;
    return 0;
}
