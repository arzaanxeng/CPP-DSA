// PAINTER PARTITION PROBLEM
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool is_possible_to_paint(vector<int>& nums , int time_limit , int k){
    int painters_count = 1;
    int working_hours = 0;
    for( int i = 0 ; i < nums.size() ; i++){
        if(working_hours + nums[i] <= time_limit){
            working_hours += nums[i];
        }
        else {
            painters_count++;
            working_hours = nums[i];
        }
    }
    return painters_count <= k;
}

void painters_placement( vector<int>& nums , int k){
    int n = nums.size();
    int r = 0 , l = INT_MIN , ans = -1;
    // Extracting the values of least and max amount of time a painter could have to paint the walls !
    for( int i = 0 ; i < n ; i++){
        r += nums[i];
        if(nums[i] > l) l = nums[i];
    }

    while( l <= r){
        int m = l + (r-l)/2;
        if(is_possible_to_paint( nums , m , k)){
            ans = m;
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    if( ans == -1) cout<<"The walls cannot be painted !";
    else cout<<"The number of minimum hours it would take to paint the walls would require : "<<ans<<" hours.";
}



int main(void) {
    int n, k;
    cout << "Enter the number of walls : ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the time reqired to paint the wall number " << (i + 1) << " : ";
        cin >> nums[i];
    }

    cout << "\nEnter the number of painters appointed : ";
    cin >> k;
    if( k < 1 ){
        cout<<"Please , Enter valid number of painters !";
        return 0;
    }
    painters_placement(nums, k);
    return 0;
}

/*
Very Important thing to note down is that even though I am using binary search but I am not sorting the array . Well the reason 
behind this is that i am not accessing the array to do binar search , i am actually doing a binary search on the gap of hours 
which are being calculated using the l , r , m !
It is actually called BINARY SEARCH ON ANSWER !
*/