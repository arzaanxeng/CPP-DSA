#include<iostream>
using namespace std;

int searchInsert(int nums[], int n, int target) {
    int l = 0;
    int r = n - 1;
    
    while (l <= r) {
        int m = l + (r - l) / 2;
        
        if (nums[m] == target) {
            return m; 
        }
        else if (nums[m] < target) {
            l = m + 1; 
        }
        else {
            r = m - 1; 
        }
    }
    return l; 
}

int main(void){
    int x;
    cout << "Enter the value of target element : ";
    cin >> x;
    
    int arr[] = {-5, 1, 3, 5, 7, 7, 8, 8, 8, 8, 10, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Insert Position Index: " << searchInsert(arr, n, x) << endl;
    return 0;
}