// Printing all the subsets 
#include <iostream>
#include <vector>
using namespace std;

int checkBit(int num, int j) {
    return (num & (1 << j)) != 0 ? 1 : 0;
}

void total_subsets( vector<int>& nums ){
    int n = nums.size();
    cout<<"\n[";
    for( int i = 0 ; i < (1<<n) ; i++ ){
        cout<<"{ ";
        for( int j = 0 ; j < n ; j++){
            if(checkBit(i,j)){
                cout<<nums[j]<<" ";
            }
        }
        cout<<"}";
        cout<<"\n";
    }
    cout<<"\n]";
}

int main(void){
    int n ;
    cout << "Enter the number of elements in the arr : ";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> nums[i];
    }
    total_subsets(nums);
}