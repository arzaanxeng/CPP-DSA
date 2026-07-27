// Count distinct elemnets within a closed window of size 'k' in an array for all of the windows
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void max_sum_subarr(vector<int>& nums, int size) {
    int n = nums.size();
    unordered_map<int, int> m; 
    if (size <= 0 || size > n) {
        cout << "\nInvalid window size!" << endl;
        return;
    }

    // -------------------------------------------------------------
    // STEP 1: Process the First Window of size 'k' (indices 0 to size - 1)
    // -------------------------------------------------------------
    for (int i = 0; i < size; i++) {
        m[nums[i]]++; // Increment frequency of each element in the first window
    }
    // Map size gives total UNIQUE keys, which is our distinct count for window 1
    int ans = m.size();
    // Slide the Window Across the Rest of the Array
    for (int i = size; i < n; i++) {
        cout << ans << "  ";

        // --- A. ADD INCOMING ELEMENT ---
        // Element entering from the right end of current window
        m[nums[i]]++;

        // --- B. REMOVE OUTGOING ELEMENT ---
        // Element leaving from the left end of previous window
        int outgoing = nums[i - size];
        m[outgoing]--;

        // --- C. CLEAN UP ZERO FREQUENCIES ---
        // CRITICAL STEP: If frequency hits 0, erase the key entirely!
        // Otherwise, m.size() will falsely count elements with frequency 0.
        if (m[outgoing] == 0) {
            m.erase(outgoing);
        }

        // Recalculate distinct elements for the newly formed window
        ans = m.size();
    }
    cout << ans << "  ";// for last iteration
}

int main(void) {
    int n, k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout << "\nEnter the size of sub-array : ";
    cin >> k;
    max_sum_subarr(nums, k);
}