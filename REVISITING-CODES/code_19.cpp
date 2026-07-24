// Intersection of two arrays 
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
void intersection_of_arr(vector<int>& nums1 ,vector<int>& nums2 ){
    unordered_set<int>s(nums1.begin() , nums1.end());
    vector<int>v;
    for(int i : nums2){
        if(s.find(i) != s.end()){
            v.push_back(i);
            s.erase(i);
        }
    }
    for( int i : v) cout<<i<< "  ";
    return;
}

int main(void){
    int n;
    cout << "Enter the number of elements in array 1: ";
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> v1[i];
    }

    int m;
    cout << "Enter the number of elements in array 2: ";
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++) { // Fixed: i < m
        cout << "Enter element " << (i + 1) << ": ";
        cin >> v2[i];
    }

    intersection_of_arr(v1 , v2);
}
