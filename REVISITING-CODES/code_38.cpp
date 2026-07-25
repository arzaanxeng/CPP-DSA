// Finding number of distinct elements  -> Normal Approach
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(void){
    // Constraints :-> { 0 <= A[i] <= N-1 } , where N is the Number of elements in the array!
    vector<int>nums = {1,2,5,2,6,3,1,2,9,3};
    unordered_map<int,int>m;
    int count = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        m[nums[i]]++;
    }
    cout<<"The number of distinct elements are : "<< m.size()<<endl;
    cout<<"The number of elements that are missing are : "<< nums.size() - m.size()<<endl;
}
