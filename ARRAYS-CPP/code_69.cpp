#include <iostream>
#include<unordered_map>
#include <vector>
using namespace std;


void find_distinct_element_count_all_windows(vector<int>& v, int k) {
    int n = v.size();
    vector<int>v_count;
    unordered_map<int,int>m;
    for(int i = 0 ; i < k ; i++){
        m[v[i]]++;
    }
    cout << m.size() << " ";
    for(int i = k ; i < n ; i++){
        m[v[i-k]]--;
        if(m[v[i-k]] == 0) m.erase(v[i-k]);
        m[v[i]]++;
        cout << m.size() << " ";
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