#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // CANNOT USE SET OR MAP
        // IF SORT THEN MIDDLE ELEMENT WILL BE THE ANS BUT TC : O(NlogN)
        int count = 0;
        int candidate = 0;
        // We are making couple of max_occuring element with others at last it will be the only one that will be left single --> ANS ( bcoz frquency > n/2 )
        for( int i = 0 ; i < nums.size() ; i++){
            if( count == 0 ){
                candidate = nums[i];
                count++;
            }
            else if( nums[i] == candidate ) count++;
            else count --;
        }
        return candidate;
    }
};