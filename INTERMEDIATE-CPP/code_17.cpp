/*
  \^__^/
  (oo)\_______
 (_)\       )===
    ||----w |
    ||     ||   AGGRESSIVE COWS 
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Checks if we can place 'k' cows with at least 'gap' distance between any two cows
bool possible_to_place_cows(const vector<int>& nums, int gap, int k) {
    int cows_placed = 1;
    int previous_position = nums[0];

    for (size_t i = 1; i < nums.size(); i++) {
        if (nums[i] - previous_position >= gap) {
            cows_placed++;
            previous_position = nums[i];
            if (cows_placed >= k) return true; 
        }
    }
    return cows_placed >= k;
}


void cows_placement(const vector<int>& nums, int k) {
    int n = nums.size();
    if (k > n || k <= 0) {
        cout << "Invalid number of cows!\n";
        return;
    }

    int ans = -1;
    // Minimum possible gap = 1( It cannot be zero ), Maximum possible gap = (max_stall - min_stall)
    int l = 1, r = nums[n - 1] - nums[0];

    while (l <= r) {
        int m = l + (r - l) / 2; // Mid represents the cows minimum distance from each other !

        if (possible_to_place_cows(nums, m, k)) {
            ans = m;     // Valid configuration 
            l = m + 1;
        } else {
            r = m - 1;   // Gap was too large, shrink search space to smaller distances.
        }
    }

    if (ans == -1) cout << "The cows cannot be placed at the stalls!\n";
    else cout << "The maximum minimum distance to place all cows is: " << ans << "\n";
    
}

int main(void) {
    int n, k;
    cout << "Enter the number of stalls : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter stall position " << (i + 1) << " : ";
        cin >> nums[i];
    }
    
    // Binary search on answer REQUIRES sorted stall positions
    sort(nums.begin(), nums.end());

    cout << "\nEnter the number of cows : ";
    cin >> k;

    cows_placement(nums, k);

    return 0;
}