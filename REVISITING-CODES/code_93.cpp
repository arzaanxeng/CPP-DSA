#include<iostream>
#include<vector>

using namespace std;

void Merge(vector<int>& nums , int l , int r ){
    int mid = l + (r-l)/2;
    int i = l , j = mid+1;
    vector<int>temp;

    while( i <= mid && j <= r ){
        if( nums[i] >= nums[j] ){
            temp.push_back(nums[j]);
            j++;
        }
        else{
            temp.push_back(nums[i]);
            i++;
        }
    }
    while(i<=mid){
            temp.push_back(nums[i]);
            i++;        
    }
    while(j<=r){
            temp.push_back(nums[j]);
            j++;
    }
    // Copy Back To nums
    int ptr = 0;
    for( int i = l ; i <= r ; i++){
        nums[i] = temp[ptr]; // This is done because size of temp is variable with each epoch and the ptr varibale is kept to start from 0 index of temp[]
        ptr++;
    }
}

void MergeSort(vector<int> & nums , int l , int r ){
    int mid = l + (r-l)/2; 
    if( l == r ) return;
    MergeSort(nums,l,mid);
    MergeSort(nums,mid+1,r);
    Merge(nums,l,r);
}

int main(void){
    vector<int> nums = {4,8,2,3,1,8,7,6,0,9,3};
    MergeSort(nums,0,nums.size()-1);
    for( int el : nums ) cout<<el<<" ";
}