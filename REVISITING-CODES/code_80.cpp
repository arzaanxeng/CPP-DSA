// Count Distinct Elements In Every Substring of fixed size 'k'
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(void){
    unordered_map<int,int>m;
    vector<char>nums = {1,2,1,3,4,2,5,5,5};
    int n = nums.size();
    int k ;
    cout<<"Enter the value of fixed window size : ";
    cin>>k;
    if( k > n ){
        cout<<"\nPlease enter a valid Value !";
        return 0;
    }
    int count = 1;
    for( int i = 0 ; i < k ; i ++) m[nums[i]]++;
    count = m.size();
    cout<<count<<"  ";

    for( int j = k ; j < n ; j++){
        m[nums[j]]++;
        m[nums[j-k]]--;
        if(m[nums[j-k]] == 0 ) m.erase(nums[j-k]);
        count = m.size();
        cout<<count<<"  ";
    }
}