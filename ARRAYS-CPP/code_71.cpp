#include <iostream>
#include<unordered_map>
#include <vector>
using namespace std;

void find_longest_subarray(vector<int>& v){
    int j = 0 , max_length = 0 , sum = 0;
    int n = v.size();
    unordered_map<int,int>m;
    for(int i = 0 ; i < n ; i++){
        m[v[i]]++;
        while(m[v[i]] > 1){
            m[v[j]]--;
            if(m[v[j]] == 0) m.erase(v[j]);
            j++;
        }
        max_length = max(max_length, i-j+1);
    }
    cout<<"The maximum legth of subarray with unique elements only is :"<<max_length;
}


int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }

    find_longest_subarray(v);
    return 0;
}