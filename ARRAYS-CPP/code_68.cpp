#include <iostream>
#include<unordered_set>
#include <vector>
using namespace std;


void find_distinct_element_count_all_windows(vector<int>& v, int k) {
    int n = v.size();
    vector<int>v_count;
    unordered_set<int>s;
    for(int i = 0 ; i<= n-k ; i++){
       s.clear();
       for(int j = i ; j < i+k ; j++){
        s.insert(v[j]);
       }
        v_count.push_back(s.size());
    }

    for(auto it = v_count.begin() ; it != v_count.end() ; it++){
        cout<<*it<<" ";
    }
    
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
    cout << "Enter the size of the subarray: ";
    cin >> k;

    if (k <= 0 || k > n) {
        cout << "Invalid subarray size.";
        return 0;
    }
    find_distinct_element_count_all_windows(v, k);
    return 0;
}