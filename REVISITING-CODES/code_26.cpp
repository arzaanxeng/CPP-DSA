// MAXIMUM value containing subarray with fixed length
#include<iostream>
#include<vector>
using namespace std;

void max_subarr(vector<int>& nums , int k){
    int sum = 0;
    for(int i = 0 ; i<k ; i++){
        sum += nums[i];
    }
    int ans = sum;
    for(int i = k ; i < nums.size() ; i++){
        sum += nums[i];
        sum -= nums[i-k];
        ans = max(ans , sum);
    }
    cout<<"The sub-array with maximum sum within the given length of sub-array is : "<<ans;
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
    cout<<"\nEnter the value of length of sub-array : ";
    cin>>k;
    if(k>n){
        cout<<"Please select the appropriate sub-array length !";
        return 0;
    }
    max_subarr(v , k);
}