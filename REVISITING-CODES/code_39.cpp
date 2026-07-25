// Finding number of distinct elements  -> Optimal Approach
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(void){
    // Constraints :-> { 0 <= A[i] <= N-1 } , where N is the Number of elements in the array!
    vector<int>nums = {1,2,5,2,6,3,1,7,9,3};
    int i = 0;
    while (i < nums.size()) {
        int correct_index = nums[i];
        // Swap if element is not at its correct index AND the target position 
        // doesn't already hold that same element (avoids duplicate infinite loops)
        if (nums[i] != nums[correct_index]) {
            swap(nums[i], nums[correct_index]);
        } else {
            i++; // Move forward only when element is placed OR duplicate is found
        }
    }
    int count = 0;
    for(int i = 0 ; i < nums.size() ; i++) if(nums[i] == i) count++;
    cout<<"The number of distinct elements are : "<< count;
}
