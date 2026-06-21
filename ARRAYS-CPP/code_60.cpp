#include<iostream>
#include<map>
#include<vector>

using namespace std;

vector<int> two_sum(vector<int>& v, int t){
    map<int,int> m;

    for(int i = 0; i < v.size(); i++){
        int req = t - v[i];
        if(m.find(req) != m.end()) return {m[req] , i};
        m[v[i]] = i;
    }

    return{-1,-1};
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

    int target;
    cout << "\nEnter the value of target sum : ";
    cin >> target;

    vector<int> ans =  two_sum(v, target);
    cout << "\nThe indices of pairs is : " <<"[ "<<ans[0]<<" , "<<ans[1]<<" ]";
}