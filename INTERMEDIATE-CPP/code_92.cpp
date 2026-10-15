// Partition 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void){
    vector<int> nums = {34,87,65,12,34,22,4,5,3,22,78,34,28,87,56};
    int pivot = nums[0];
    int l = 1 , r = nums.size() -1;
    while( l <= r ){
        if( nums[l] < pivot ) l++;
        else{
            swap(nums[l] , nums[r]);
            r--;
        }
    }
    swap(pivot,nums[r]); // This is very important as the pivot will be replaced with nums[r] to get it sorted !!!

    return 0;
}