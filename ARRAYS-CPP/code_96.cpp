// Print All Subsequences in an Array

// A subsequence is formed by deciding for EVERY element:
//      1. TAKE the element
//      2. DON'T TAKE the element
//

/*
Example:
arr = {3, 5}

Subsequences:
{}       -> take nothing
{3}      -> take 3
{5}      -> don't take 3, take 5
{3, 5}   -> take both

Total subsequences = 2^n

*/

#include<iostream>
#include<vector>
using namespace std;


void f(int i, int n, const int arr[], vector<int>& nums) {
    // BASE CASE
    // We have considered every element of the array.
    // Therefore, 'nums' now contains one complete subsequence.
    if(i == n) {
        // Print the current subsequence
        for(int j = 0; j < nums.size(); j++) cout << nums[j] << " ";     
        cout << endl;
        return;
    }

    // --------------------------------------------------
    // CHOICE 1: TAKE arr[i]
    // --------------------------------------------------

    // Add the current element to our subsequence
    nums.push_back(arr[i]);

    // Move to the next element
    f(i + 1, n, arr, nums);
    /*
    BACKTRACK:
    
    The recursive call above explored all subsequences
    where arr[i] was TAKEN.
    
    Now remove arr[i] so that we can explore the
    other possibility: DON'T TAKE arr[i].
    */
    nums.pop_back();

    // --------------------------------------------------
    // CHOICE 2: DON'T TAKE arr[i]
    // --------------------------------------------------

    // We simply move to the next element without adding
    // arr[i] to nums.
    f(i + 1, n, arr, nums);
}


int main() {
    int arr[] = {3, 5, 8, 1, 0, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    vector<int> path;
    f(i, n, arr, path);
}