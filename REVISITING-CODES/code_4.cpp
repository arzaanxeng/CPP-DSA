/*
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

Example :
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int> v = {1,1,2,3,3,3,4,4,4,4,5,5,6};
    int n = v.size();
    int j = 0;
    for( int i = 0 ; i < n ; i++){
        if(v[i] != v[j]){
            j++;
            v[j] = v[i];
        }
    }

    cout << "Unique elements: ";
    for (int i = 0; i <= j; i++) {
        cout << v[i] << " ";
    }

}
