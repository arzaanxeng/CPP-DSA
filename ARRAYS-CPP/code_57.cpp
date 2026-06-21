#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool two_sum(vector<int>& v , int t){
    unordered_set<int>s;
    int n = v.size();
    for(int i = 0 ; i<n ; i++){
        int req = t - v[i];
        if(s.find(req) != s.end())return true;
        else s.insert(v[i]);
    }
    return false;
}

int main(void){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n); 
    for (int i = 0; i < n; i++) {
        cout<<"Enter the value of "<<(i+1)<<" element :";
        cin >> v[i];
    }

    int target;
    cout<<"\nEnter the value of target sum :";
    cin>>target;

    bool ans = two_sum(v ,target);
    if(ans) cout<<"Yes";
    else cout<<"No";
}