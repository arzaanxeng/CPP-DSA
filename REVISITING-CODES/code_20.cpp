// TWO SUM
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

void two_sum(vector<int>& v , int target ){
    unordered_set<int>s;
    // target = 5
    int val;
    // v = {1,2,3,4}
    for(int i : v){
        val = target - i; // 4 3 2 1
        if(s.count(val)){
            cout<<"The sum = "<<target<<", exists!";
            return;
        }
        else{
            s.insert(i); // 1 2 -> 2 exists and summing up with 3 results into the target value
        }
    }
    cout<<"The couplet sum does not exist in the array!";
}


int main(void){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cout<<"Enter the value of "<<(i+1)<<" element : ";
        cin>>v[i];
    }
    int t;
    cout<<"\nEnter the value of sum : ";
    cin>>t;

    two_sum(v , t);
}