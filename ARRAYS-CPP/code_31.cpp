#include <iostream>
using namespace std;

int main(void) {
    int arr[] = {2, 5, 3, 8, 6, 1, 9, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefix[n];
    int running_even_sum = 0;

    for (int i = 0; i < n; i++) {
        // O(N)
        if (i % 2 == 0) {
            running_even_sum += arr[i];
        }
        prefix[i] = running_even_sum; // Store the cumulative sum
    }

    int query;
    cout << "Enter the number of queries: ";
    cin >> query;

    // O(1) time
    for (int i = 1; i <= query; i++) {
        int l, r;
        cout << "\nEnter the start index (l): ";
        cin >> l;
        cout << "Enter the end index (r): ";
        cin >> r;

        int even_indices_sum = 0;
        if (l == 0) {
            even_indices_sum = prefix[r];
        } else {
            even_indices_sum = prefix[r] - prefix[l - 1];
        }
        cout << "Sum of even indices elements in range [" << l << ", " << r << "] is: " << even_indices_sum << "\n";
    }

    return 0;
}