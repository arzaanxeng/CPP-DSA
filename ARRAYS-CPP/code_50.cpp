// Unique Elements Containing array or not 
#include<iostream>
#include<set>
using namespace std;
int main(void){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++){ 
    cout<<"Enter the value of element number "<<(i+1)<<" :";
    cin>>arr[i];
    }
   
set<int> s;
bool duplicate = false;

for(int i = 0; i < n; i++) {
    if(s.find(arr[i]) != s.end()) {
        duplicate = true;
        break;
    }
    s.insert(arr[i]);
}

if(duplicate) cout << "Array contains duplicates";
else cout << "All elements are unique";

}

