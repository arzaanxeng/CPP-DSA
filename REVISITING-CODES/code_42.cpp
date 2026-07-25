// First occurence of the target value
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find_first( vector<int>& nums , int k){
    int n = nums.size();
    int l = 0 , r = n-1 , ans = -1; 
    while( l <= r){
        int m = l + (r-l)/2;
        if(nums[m] == k){
            r = m-1;
            ans = m;
        }
        else if( nums[m] > k) r = m-1;
        else l = m+1;
    }
    return ans;
}

int find_last(const vector<int>& nums, int k) {
    int l = 0, r = nums.size() - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] == k) {
            ans = m;
            l = m + 1; 
        } else if (nums[m] > k) {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return ans;
}

int main(void){
    int n , k;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int>nums(n);
    for( int i = 0 ; i < n ; i++){
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    cout<<endl;
    cout<<"Enter the value of target value : ";
    cin>>k;

    int ans1 = find_first( nums , k);
    int ans2 = find_last( nums , k);
    if(ans1 >= 0 )cout<<"Yes , the target value appears in the array first at index number : "<<ans1<<" and at last index : "<<ans2 ;
    else cout<<"No , it does not exist in the array";

}
