// Maximum Sum in a Sub-Array
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
    int sum = 0 , ans = INT_MIN;
    for( int i = 0 ; i < n ; i++){
        sum += v[i];
        if(sum < 0) sum = 0;
        ans = max(ans , sum);
    }
    cout<<"The maximum sum in a sub_array is equal to : "<<ans;
    return 0;
}
