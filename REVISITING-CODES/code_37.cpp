#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
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

    int l = 0, r = 0, start = 0;
    int sum = 0, ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        sum += v[i];

        // Track maximum sum and its boundaries
        if (sum > ans) {
            ans = sum;
            l = start;
            r = i;
        }

        // If sum becomes negative, reset and start fresh from i + 1
        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }
    }

    cout << "The maximum sum in a sub-array is equal to : " << ans << endl;
    cout << "The subarray is : ";
    for (int i = l; i <= r; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}