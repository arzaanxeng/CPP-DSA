// Longest Sub-Array with no duplicate elements 
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


void max_distinct_elements_sub_array(vector<int>& nums){
   // I will store the frequency of each element in the hashmap and as soon as the frequency > 1 , the window has to shrink!
    int n = nums.size() , l = 0 , max_length = -1;
    unordered_map<int,int>m;
    for(int r = 0 ; r < n ; r ++){
        m[nums[r]]++;
        while(m[nums[r]] > 1){
            m[nums[l]]--; 
            if (m[nums[l]] == 0) m.erase(nums[l]); 
            l++;
        }
/*
I made a mistake here thinking that when I am including elements in the map and as soon as the frequency of any element would hit
more than 1 than i would run the while loop and start removing all the elements from the left ( Majore flaw was that i thought
that the number included which would trigger the while loop would lie at the right most extreme of the window but it's not true)
Window: [3, 4, 5, 4]
         ^        ^
         l        r  <-- Duplicate '4' detected at r=3 but if i will erase keys from left i would be left with a half window still!
*/ 
    max_length = max( max_length , r - l + 1);
    }
    cout<<max_length;
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
    max_distinct_elements_sub_array(nums);
    return 0;
}