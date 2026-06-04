#include<iostream>
using namespace std;

void square_prefix_sum( int arr[] , int n , int l , int r){
    int arr_[n] , count = 0;
    for(int i = 0 ; i < n ; i++) arr_[i] = arr[i]*arr[i];

    int arr_prefix[n] , sum = 0;
    for(int i = 0 ; i < n ; i++){
       sum += arr_[i];
       arr_prefix[i] = sum;
    }

    if ( l == 0 ) cout<<"The sum of the elements till index number "<<r<<" is :"<<arr_prefix[r];
    else cout<<"The sum of the elements from index number "<<l<<" to "<<r<<" is :"<<arr_prefix[r] - arr_prefix[l-1];
}

int main(void) {
    int arr[] = {1,27,3,4,21,58,6,74,8,93,32,41};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l , r;
    cout<<"Enter the value of left index :";
    cin>>l;
    cout<<"Enter the value of right index :";
    cin>>r;

    // Optional: Add a quick bounds check for safety
    if(l < 0 || r >= n || l > r) {
        cout << "Invalid range indices!" << endl;
        return 0;
    }

    square_prefix_sum(arr , n , l , r);
    return 0;
}