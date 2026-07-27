// Count Sub-Array with no duplicate elements 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


void count_distinct_elements_sub_array(vector<int>& nums){
   // I will store the frequency of each element in the hashmap and as soon as the frequency > 1 , the window has to shrink!
    int n = nums.size() , l = 0 , count = 0;
    unordered_map<int,int>m;
    for(int r = 0 ; r < n ; r ++){
        m[nums[r]]++;
        while(m[nums[r]] > 1){
            m[nums[l]]--; 
            if (m[nums[l]] == 0) m.erase(nums[l]); 
            l++;
        }
        count += (r - l + 1);
    }
    cout<<count;
}

int main(void) {
    int n;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << "  : ";
        cin >> nums[i];
    }
    count_distinct_elements_sub_array(nums);
    return 0;
}