// Binary Search 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool search_target( vector<int>& nums , int k){
    int n = nums.size();
    int l = 0 , r = n-1; 
    while( l <= r){
        int m = l + (r-l)/2;
        if(nums[m] == k) return true;
        else if( nums[m] > k) r = m-1;
        else l = m+1;
    }
    return false;
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

    bool ans = search_target( nums , k);
    if(ans) cout<<"Yes , the target value exists in the array !";
    else cout<<"No , the target value does not exists in the array !";
    
}
