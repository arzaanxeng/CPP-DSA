// Count Inversions such that nums[i] > nums[j] while j > i
#include<iostream>
#include<vector>
using namespace std;

int Merge( vector<int>& nums , int l , int r ){
    int mid = l + (r-l)/2;
    int i = l , j = mid+1;
    int ans3 = 0;
    vector<int>temp;
    while( i <= mid && j <= r ){
        if( nums[i] > nums[j]){
            ans3 += mid-i+1;
            temp.push_back(nums[j]);
            j++;
        }
        else{
            temp.push_back(nums[i]);
            i++;
        }
    }
    while( i <= mid ){
        temp.push_back(nums[i]);
        i++;
    }
    while( j <= r ){
        temp.push_back(nums[j]);
        j++;
    }
    int ptr = 0;
    for( int i = l ; i <= r ; i++){
        nums[i] = temp[ptr];
        ptr++;
    }
    return ans3;
}


int CountInversions( vector<int>& nums , int l , int r ){
    int mid = l + (r-l)/2;
    if( l == r ) return 0;
    int ans1 = CountInversions(nums,l,mid);
    int ans2 = CountInversions(nums,mid+1,r);
    int ans3 = Merge(nums,l,r);
    return ans1+ans2+ans3;
}

int main(void){
    vector<int> nums = {2,7,6,9,4,1,4,5,7,9,4,3,6,8,0};
    int ans = CountInversions(nums , 0 , nums.size() - 1);
    cout<<"The total pairs are : "<<ans;
}
