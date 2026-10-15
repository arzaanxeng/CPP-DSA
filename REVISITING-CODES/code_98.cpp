// Search in a rotated array 
#include <iostream>
#include <vector>

int searchRotatedArray(const std::vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) return mid;

        // Check if the left half is sorted
        if (nums[low] <= nums[mid]) {
            if (target >= nums[low] && target < nums[mid]) {
                high = mid - 1; // Target is in the left sorted portion
            } else {
                low = mid + 1;  // Target is in the right portion
            }
        } 
        // Otherwise, the right half must be sorted
        else {
            if (target > nums[mid] && target <= nums[high]) {
                low = mid + 1;  // Target is in the right sorted portion
            } else {
                high = mid - 1; // Target is in the left portion
            }
        }
    }
    return -1; // Target not found
}

int main() {
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    std::cout << "Index of target: " << searchRotatedArray(nums, target) << "\n"; // Output: 4
    return 0;
}
