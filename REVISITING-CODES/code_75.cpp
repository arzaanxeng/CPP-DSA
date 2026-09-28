// Sum of Sub-arrays 

#include<iostream>
#include<vector>
using namespace std;
// Brute Force 
/*
int main(void){
    vector<int>nums = {1,7,-5,8,4};
    int n = nums.size() ;
    int sum = 0;
    for( int l = 0 ; l < n ; l++){
        for( int r = l ; r < n ; r ++){
            sum = 0;
            for( int i = l ; i <= r ; i++){
                sum += nums[i];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/

// Using PSA 
int main(void){
    vector<int>nums = {1,7,-5,8,4};
    int n = nums.size() ;
    int sum = 0;
    vector<int>p(n);
    p[0] = nums[0];
    for( int i = 1 ; i < n ; i++) p[i] += nums[i] + p[i-1];
    for( int l = 0 ; l < n ; l++){
        for( int r = l ; r < n ; r ++){
            if(l == 0) sum = p[r];
            else sum = p[r] - p[l-1];
            cout<<sum<<" ";
        }
        cout<<endl;  
    }
    return 0;
}