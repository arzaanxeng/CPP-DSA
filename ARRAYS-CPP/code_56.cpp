#include<iostream>
#include<vector>

using namespace std;

bool two_sum(vector<int>& v , int t){
    int n = v.size();
    for(int i = 0 ; i<n ; i++){
        for(int j = (i+1) ; j < n ; j++){
            if(v[i] + v[j] == t) return true;
        }
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