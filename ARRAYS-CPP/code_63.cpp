#include<iostream>
#include<vector>
using namespace std;

void all_subarr_sum(vector<int>& v){
    int n = v.size();
    for(int i = 0 ; i< n ; i++){
        int sum = 0;
        for(int j = i ; j<n ; j++){
            sum += v[j];
            cout<<sum<<" ";

        }
        cout<<endl;
    }
}


int main(void){
    int n;
    cout<<"Enter the value of size of the array: ";
    cin>>n;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
       cout<<"Enter the "<<(i+1)<<" value :";
       cin>>v[i];
    }
    all_subarr_sum(v);
    return 0;
}