#include <iostream>
using namespace std;

// Function to find the first occurrence
int findFirst(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    int firstIdx = -1;
    
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == target) {
            firstIdx = m;     
            r = m - 1;        
        } 
        else if (arr[m] > target) {
            r = m - 1;
        } 
        else {
            l = m + 1;
        }
    }
    return firstIdx;
}

// Function to find the last occurrence
int findLast(int arr[], int n, int target) {
    int l = 0, r = n - 1;
    int lastIdx = -1;
    
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (arr[m] == target) {
            lastIdx = m;      
            l = m + 1;       
        } 
        else if (arr[m] > target) {
            r = m - 1;
        } 
        else {
            l = m + 1;
        }
    }
    return lastIdx;
}

int main(void) {
    int arr[] = {5, 7, 7, 8, 8, 8, 8, 10};
    int n = 8;
    int target = 8;

    int first = findFirst(arr, n, target);
    int last = findLast(arr, n, target);

    if (first != -1) {
        cout << "The first index at which the target is present is : " << first << "\n";
        cout << "The last index at which the target is present is : " << last << "\n";
    } else {
        cout << "-1 (Target does not exist)\n";
    }

    return 0;
}