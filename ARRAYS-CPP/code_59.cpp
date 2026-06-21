#include<iostream>
#include<map>
#include<vector>

using namespace std;

int two_sum(vector<int>& v, int t){
    map<int,int> m;
    int count = 0;

    for(int i = 0; i < v.size(); i++){
        int req = t - v[i];
        if(m.find(req) != m.end()) count += m[req];

        m[v[i]]++;
    }

    return count;
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

    cout << "\nThe number of pairs are : " << two_sum(v, target);
}