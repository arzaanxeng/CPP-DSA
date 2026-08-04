#include <iostream>
#include <vector>
using namespace std;

bool isSortedAsc( vector<int>& nums ,int n ){
    if( n == 1) return true;
    bool ans = isSortedAsc( nums , n-1 );
    if( ans == false ) return false;
    return nums[n-1] >= nums[n-2];
}

int main(void) {
    int n, k;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of " << (i + 1) << " element : ";
        cin >> v[i];
    }
    bool ans = isSortedAsc( v , n );
    if(ans) cout<<"Yes , the array is sorted !";
    else cout<<"No , it is not a sorted array !";
    return 0;
}