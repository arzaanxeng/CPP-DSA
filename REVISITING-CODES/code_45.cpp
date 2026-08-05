// SORT 0's 1's 2's
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortArr( vector<int>nums ){
    int l = 0 , i = 0 , r = nums.size() -1;
    while( i <= r ){
        if(nums[i] == 1) i++;
        else if(nums[i] == 0 ){
            swap( nums[i] , nums[l] );
            i++;
            l++;
        }
        else if( nums[i] == 2 ){
            swap( nums[i] , nums[r]);
            r--;
        }
    }
    cout<<"\nSORTED ARRAY :- ";
    for( int el : nums) cout<< el <<" ";
}

int main(void){
    int n ;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> v(n);
    cout<<"\nPlease only insert digits 0 , 1 and 2 only !\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of " << (i + 1) << " element : ";
        cin >> v[i];
    }
    sortArr( v );
    return 0;
}