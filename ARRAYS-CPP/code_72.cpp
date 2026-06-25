#include <iostream>
#include<climits>
#include <vector>
using namespace std;

void find_smallest_subarray(vector<int>& v , int k){
    int j = 0 , min_length = INT_MAX, sum = 0;
    int n = v.size();
    for(int i = 0 ; i < n ; i++){
        sum +=v[i];
        while( sum > k){
            min_length = min(min_length , i-j+1);
            sum-=v[j];
            j++;
        }
    }
    cout<<"The minimum legth of subarray with sum just above "<<k<<" is :"<<min_length;
}


int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }
    cout << "Enter the lower bound of the subarray sum : ";
    cin >> k;

    find_smallest_subarray(v, k);
    return 0;
}