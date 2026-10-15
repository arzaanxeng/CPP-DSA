
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int partition(vector<int>& nums, int start, int end) {
    int pivot = nums[start];
    int l = start + 1;
    int r = end;

    while (l <= r) {
        if (l <= end && nums[l] < pivot) {
            l++;
        } else {
            swap(nums[l], nums[r]);
            r--;
        }
    }

    swap(nums[start], nums[r]);
    return r;
}

void quickSort(vector<int>& nums, int l, int r) {
    if (l >= r) return;

    int pivot_index = partition(nums, l, r);

    quickSort(nums, l, pivot_index - 1);
    quickSort(nums, pivot_index + 1, r);
}

int main() {
    vector<int> nums = {34, 87, 65, 12, 34, 22, 4, 5, 3,
                        22, 78, 34, 28, 87, 56};

    quickSort(nums, 0, nums.size() - 1);

    for (int el : nums) cout << el << " ";
}
