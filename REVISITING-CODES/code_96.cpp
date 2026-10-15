// COUNT SORT
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(void){
    // -100 <= nums[i] <= 100
    vector<int> nums = {63, -72, -94, 89, -30, -38, -43, -65, 88, -74, 73, 89, 39, -78, 51, 8, 0, -92, -93, -77, -45, -41, 29, 54, -94, 43};
    int min = *min_element(nums.begin(),nums.end());
    int max = *max_element(nums.begin(),nums.end());
    vector<int>freq(max-min+1,0);
    for( int i = 0 ; i < nums.size() ; i++) freq[nums[i]-min]++; // Stored the frequency of each element
    for( int i = 0 ; i <= freq.size() - 1 ; i++){
        while( freq[i] > 0 ){
            cout<<(i+min)<<" ";
            freq[i]--;
        }
    }
    return 0;
}