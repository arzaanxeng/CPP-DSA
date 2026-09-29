// Maximum Subarray Sum and Also Print the Subarray 
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<int>nums = {7,8,-50,-10,2,13,-7,-19,-3};
    int start = 0 , end = 0 , sum = 0 , temp = 0, ans = INT_MIN;
    for( int i = 0 ; i < nums.size() ; i++){
        if( sum < 0 ){
            sum = 0;
            temp = i;   // Temproary Starting Index 
        }
        sum += nums[i]; // This would come after the negative reasoning block as the upcoming term might make the sum positive 
        if( sum > ans ){
            ans = sum;
            start = temp; // Actual Starting Index
            end = i;      // Actual Ending Index
        }
    }
    cout<<"The maximum sum is : "<<ans<<endl;
    cout<<"\nThe Subarray is : \n";
    for( int i = start ; i <= end ; i++) cout<<nums[i]<<"  ";
    return 0;
}