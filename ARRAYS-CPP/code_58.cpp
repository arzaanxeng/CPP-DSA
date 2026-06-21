#include<iostream>
#include<vector>

using namespace std;

int two_sum(vector<int>& v , int t){
    int n = v.size();
    int count = 0;
    for(int i = 0 ; i<n ; i++){
        for(int j = (i+1) ; j < n ; j++){
            if(v[i] + v[j] == t){
                count++;
            }
        }
    }
return count;
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

    int ans = two_sum(v ,target);
    cout<<"\nThe number of pairs are :"<<ans;
}