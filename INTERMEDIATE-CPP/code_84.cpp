// Count Inversions
#include <iostream>
#include <vector>
using namespace std;

int Merge( vector<int>& nums , int l , int r ){
    int mid = l + (r-l)/2;
    int i = l;
    int j = mid+1;
    vector<int>ans;
    int ans3 = 0;
    while (i <= mid && j <= r) {
        if (nums[i] > nums[j]) {  // { (nums[i] > nums[j]) && (j > i) }
            ans3 += mid-i+1;
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
    return ans3;
}

int MergeSortCount(vector<int>& nums , int l , int r ){
    int mid = l + (r-l)/2;
    if( l >= r ) return 0;
    int ans1 = MergeSortCount(nums,l,mid);
    int ans2 = MergeSortCount(nums,mid+1,r);
    int ans3 = Merge(nums,l,r);
    return ans1 + ans2 + ans3;
}

int main() {
    vector<int> nums = {3, 6, 1, 3, 8, 2, 9};

    int ans = MergeSortCount(nums, 0, nums.size() - 1);
    cout<<"The number of Inversions are : "<<ans;

    return 0;
}