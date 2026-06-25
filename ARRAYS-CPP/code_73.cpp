#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int>v = {1,0,1,0,0,0,1,1,1,0,1,0,1};
    int n = v.size();
    int i = 0 ,j = n-1;
    while(i <= j){
        if(v[i] == 0){
            i++;
        }
        else{
            swap(v[i] , v[j]);
            j--;
        }
    }
    for(auto it = v.begin() ; it != v.end() ; it++) cout<<*it<<" ";
}