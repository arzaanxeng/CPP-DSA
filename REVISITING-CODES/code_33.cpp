// Shortest Subarray with sum < x 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// N ~ 10^5 ; A[i] > 0

void smallest_size_subarr(vector<int>& nums , int x){
//     int sum = 0 , min_length = INT_MAX , l = 0;
//     for(int r = 0 ; r < nums.size() ; r++){
//         sum += nums[r];
//         while (sum >= x) {
//             min_length = min(min_length, r - l + 1); 
//             sum -= nums[l];                          
//             l++;
//         }
//     }
}


int main(void){
    int n , k;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    cout<<"\nEnter the value of sum in the sub-array : ";
    cin>>k;
    smallest_size_subarr(v , k);
}