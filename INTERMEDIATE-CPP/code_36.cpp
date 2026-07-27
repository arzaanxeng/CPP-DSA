// Aggressive Cows
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool possible_to_place( vector<int>& nums , int gap , int k ){
    int cows_placed = 1;
    int previous_position = nums[0];
    for( int i = 1 ; i < nums.size() ; i++){
        if(nums[i] - previous_position >= gap){
            cows_placed++;
            previous_position = nums[i];
        }
    }
    return cows_placed >= k;
}


void place_cows( vector<int>& nums , int k){
    int n  = nums.size();
    int l = 1 , r = nums[n-1] - nums[0] , ans = -1;
    while( l <= r){
        int m = l + (r-l)/2;
        if(possible_to_place( nums , m , k)){
            ans = m;
            l = m+1; // Try to maximize and look for a bigger gap!
        }
        else{
            r = m-1; // Gap was too large to fit in all the cows !
        }
    }
    if(ans != -1)cout<<"The cows can be placed in the stalls within the min max gap of : "<<ans;
    else cout<<"The cows cannot be placed in the stalls ";
}


int main(void){
    int n, k;
    cout << "Enter the psotion of stalls : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the element number " << (i + 1) << " : ";
        cin >> nums[i];
    }

    sort( nums.begin() , nums.end() );
    cout << "\nEnter the number of cows : ";
    cin >> k;
    place_cows(nums, k);
    return 0;
}