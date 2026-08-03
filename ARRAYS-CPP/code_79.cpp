#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
// WHENEVER YOU SEE A SUBARRAY PROBELM ASSOCIATED WITH COUNTING THINK OF SUBARRAY AND HASHMAP --> ALWAYS !!!
int SubarrOfSum_k(vector<int>& nums , int k ){
    unordered_map<int,int>m;
    int pref_sum = 0 , count = 0;
    m[0] = 1;
    for( int num : nums){
        pref_sum += num;

        if(m.find(pref_sum - k) != m.end()) count+= m[pref_sum - k];
        m[pref_sum]++;
    }

    return count;
}

int main(void) {
    int n, k;
    cout << "Enter the number of elements in the array  : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element number : " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout<<"\nEnter the sum of the subarray : ";
    cin>>k;
    int ans = SubarrOfSum_k( nums , k);
    cout<<"The total number of subarrays with sum "<<k<<" are : "<<ans;
    return 0;
}