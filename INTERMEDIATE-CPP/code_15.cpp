// Finding the values in the array which are less than the required value 

#include<iostream>
#include <algorithm>
#include<string>
using namespace std;

void binary_sum( vector<int>& nums , int x){
    int l = 0 , r = nums.size() -1 , ans = -1;
    while( l <= r){
        int m = l + (r-l)/2;
        if(nums[m] <= x){
            ans = m + 1;
            l = m+1;
        }
        else r = m-1;
    }
    if( ans == -1) cout<<"\nThe number of values <= "<<x<<" is : "<<ans + 1;
    else cout<<"\nThe number of values <= "<<x<<" is : "<<ans;
    cout<<endl;
}

int main(void){
    cout<<"\nDISCLAIMER : The query here refers to finding the numbers in the array which are less than the value of a particular query \n\n";
    int n , q;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int>nums(n);
    for( int i = 0 ; i < n ; i++){
        cout << "Enter the value of element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    sort(nums.begin() , nums.end());

    cout<<"Enter the number of queries : ";
    cin>>q;
    for(int i = 0 ; i < q ; i++ ){
        int query_num;
        cout<<"Enter the value of query number "<<(i+1)<<" : ";
        cin>>query_num;
        binary_sum(nums , query_num);
    }

}