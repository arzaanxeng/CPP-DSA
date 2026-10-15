// Randomised Quick Sort 
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;

int partition(vector<int>& nums, int start, int end) {
    // Choose a random pivot index
    int randomIndex = start + rand() % (end - start + 1);

    // Move the random pivot to the beginning
    swap(nums[start], nums[randomIndex]);

    int pivot = nums[start];
    int l = start + 1;
    int r = end;

    while (l <= r) {
        if (nums[l] < pivot) {
            l++;
        } else if (nums[r] >= pivot) {
            r--;
        } else {
            swap(nums[l], nums[r]);
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
    vector<int> nums = {
        34, 87, 65, 12, 34, 22, 4, 5,
        3, 22, 78, 34, 28, 87, 56
    };

    srand(static_cast<unsigned int>(time(nullptr)));

    quickSort(nums, 0, static_cast<int>(nums.size()) - 1);

    for (int el : nums) {
        cout << el << " ";
    }

    return 0;
}
