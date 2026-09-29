// Sort 0's and 1's 
#include<iostream>
#include<vector>
using namespace std;

// Sort 0's 2's 1's 
void sort(vector<int>& nums){
    int l = 0 , i = 0 ;
    int r = nums.size()-1;
    while( i <= r ){
        if(nums[i] == 0){
            swap(nums[i],nums[l]);
            i++;
            l++;
        }
        else if(nums[i] == 1) i++;
        else{
            swap(nums[i],nums[r]);
            r--;
        }
    }
    cout<<"\nSorted Array of 0's 1's and 2's is : \n";
    for( int num : nums ) cout<<num<<" ";
    cout<<endl;
}


int main(void){
    vector<int> nums = {1,0,0,1,1,0,0,0,1,1,0,1,0};
    vector<int> v = {1,2,0,0,2,2,1,1,1,0,0,0,1,1,0,0,0,2,2,1,0};
    sort(v);
    int l = 0 , r = nums.size()-1;
    while( l < r){ // If we use equality then it would give wrong answer as sorting occurs totally for l < r
        if(nums[l] == 0) l++;
        if(nums[l] == 1){
            swap(nums[l] , nums[r]);
            r--;
        }
    }
    cout<<"\nSorted Array of 0's and 1's is : \n";
    for( int num : nums) cout<<num<<" ";

}


