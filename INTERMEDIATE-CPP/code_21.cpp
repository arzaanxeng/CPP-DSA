// TWO SUM COUNT
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int two_sum(vector<int>& nums , int target  ){
    unordered_map<int,int>m;
    int count = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        int req =  target - nums[i];
        if(m.find(req) != m.end()){
            count += m[req];
        }
        m[nums[i]]++;
    }
    return count;
}

int main(void){
    int n, k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element number " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout << "\nEnter the required SUM : ";
    cin >> k;
    int ans = two_sum(nums,k);
    cout<<"\nANSER IS :-> "<<ans;
    
}