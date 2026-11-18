#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while (i < n) {
            
            // Correct index of current element
            int correct = arr[i] - 1;

            // If element is not at correct position, swap
            if (arr[i] != arr[correct]) swap(arr[i], arr[correct]);
            
            // Otherwise move to next index
            else i++;
        }
        vector<int>ans;
        for( int i = 1 ; i <= arr.size() ; i++){
            if(arr[i-1] != i) ans.push_back(i);
        }
        return ans;
    }
};