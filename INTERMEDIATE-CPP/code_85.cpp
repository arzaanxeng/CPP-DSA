#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int nums[] = {0, 3, 5, 7, 2, 1, 6, 8, 3, 2, 9, 9, 2, 3, 5, 6, 4, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    // FIXED: Initialize the frequency array with zeros!
    int freq[10] = {0};   
    for(int i = 0; i < n; i++) freq[nums[i]]++; 

    for(int i = 9 ; i >= 0 ; i--){
        for(int j = 1 ; j <= freq[i]; j++) cout <<i<<" ";
        
    }
    cout << endl;

    return 0;
}