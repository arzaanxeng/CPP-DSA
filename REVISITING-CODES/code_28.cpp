// Count Distinct Elements in Every Window of Size = K 
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void max_distinct_el(vector<int>& nums , int k){
    unordered_map<int,int>m;
    int ans = INT_MIN , count = INT_MIN;
    for(int i = 0 ; i < k ; i++){
        m[nums[i]]++;
    }
    count = m.size();
    ans = count;
    for(int i = k ; i < nums.size() ; i++){
        m[nums[i]]++;
        if(m.find(nums[i-k]) != m.end()){
            m[nums[i-k]]--;
        }
        if(m[nums[i-k]] == 0) m.erase(nums[i-k]);
        count = m.size();
        ans = max(ans , count);
    }
    cout<<"The maximum number of distinct elements in a subarray is : "<<ans;
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
    max_distinct_el(v , k);
}