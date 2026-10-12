#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int>& nums, int l, int r) {
    int mid = l + (r - l) / 2; 
    int i = l;
    int j = mid + 1;
    vector<int> ans;

    // FIXED: i must go up to mid of the array retrieved and j must go till end !
    while (i <= mid && j <= r) {
        if (nums[i] >= nums[j]) { 
            ans.push_back(nums[j]);
            j++;
        } else {
            ans.push_back(nums[i]);
            i++;
        }
    }

    while (i <= mid) {
        ans.push_back(nums[i]);
        i++;
    }

    while (j <= r) {
        ans.push_back(nums[j]);
        j++;
    }

    int ptr = 0;
    for (int k = l; k <= r; k++) {
        nums[k] = ans[ptr];
        ptr++;
    }
}

void MergeSort(vector<int>& nums, int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;

    // Dividing the Left Half into Chunks
    MergeSort(nums, l, mid);
    // Dividing the Right Half into Chunks
    MergeSort(nums, mid + 1, r);
    // Merging of The chunks from the Ground Up
    Merge(nums, l, r);
}

int main() {
    vector<int> nums = {3, 6, 1, 3, 8, 2, 9};

    MergeSort(nums, 0, nums.size() - 1);

    for (int el : nums) cout << el << " ";
    
    cout << endl;
    
    return 0;
}