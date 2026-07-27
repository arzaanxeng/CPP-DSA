// TWO SUM 
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool two_sum(vector<int>& nums , int target  ){
    unordered_set<int>s;
    for( int i = 0 ; i < nums.size() ; i++){
        int req =  target - nums[i];
        if(s.find(req) != s.end()){
            return true;
        }
        s.insert(nums[i]);
    }
    return false;
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
    bool ans = two_sum(nums,k);
    if(ans) cout<<"YES , there is/are couplets equating to the sum exists in the array !";
    else cout<<"NO , there is/are no couplets equating to the sum exists in the array !";
}