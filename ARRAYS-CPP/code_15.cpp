#include<iostream>
using namespace std;
/*       
                                     ===== BINARY SEARCH ALGORITHM =====
Binary search is an efficient algorithm used to find the position of a target value within a sorted array. 
It works on the divide-and-conquer principle, continuously halving the search space until the target element 
is located or the space is exhausted

*/
#include <iostream>
using namespace std;

int main(void) {
    int n = 20;
    int arr[] = {1,2,4,6,8,9,11,12,14,18,21,25,28,34,38,39,43,46,49,68};
    int x = 38;
    bool flag = false;

    int l = 0;
    int r = n - 1;

    // Track boundaries, not individual loop counts
    while (l <= r) {
        int m = l + (r - l) / 2; // Prevents potential integer overflow as it might cross the integer limit of (2^31 - 1)

        if (arr[m] == x) {
            flag = true;
            break; 
        }
        if (arr[m] < x) {
            l = m + 1; // Target is in the right half
        } else {
            r = m - 1; // Target is in the left half
        }
    } 

    if (flag) {
        cout << "The element was found !";
    } else {
        cout << "The element was not found !";
    }
    
    return 0;
}