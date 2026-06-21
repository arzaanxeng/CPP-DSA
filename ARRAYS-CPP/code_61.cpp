#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool  check_sub_array_null(vector<int>& v){
    int n = v.size() ;
    int prefix_sum = 0;
    set<int>s;
    for(int i = 0 ; i < n ; i++){
        prefix_sum += v[i];
        if(prefix_sum == 0) return true;
        if(s.find(prefix_sum) != s.end()) return true;
        else s.insert(prefix_sum);
    }
    return false;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the value of " << (i+1) << " element : ";
        cin >> v[i];
    }

    bool ans =  check_sub_array_null(v);
    if(ans) cout<<"Yes";
    else cout<<"No";

}