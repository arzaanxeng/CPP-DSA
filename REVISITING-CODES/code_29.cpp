// Find the subarray of maximum length with sum < X
#include<iostream>
#include<vector>
using namespace std;
// N ~ 10^5 ; A[i] > 0

void max_size_subarr(vector<int>& v , int sum){
    int max_length = 0 , current_sum = 0 , l = 0;
    for( int r = 0 ; r < v.size() ; r++){
        current_sum += v[r];
        while(l <= r && current_sum >= sum){
            current_sum -= v[l];
            l++;
        }
        max_length = max(max_length , r-l+1);
    }
    cout<<"The subarray with maximum length containin sum < x is of size : "<<max_length;
}


int main(void){
    int n , k;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    cout<<"\nEnter the value of sum in the sub-array : ";
    cin>>k;
    max_size_subarr(v , k);
}