#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int>v = {1,0,2,0,2,0,1,1,2,0,1,0,1,0,2,1,0,2,1,1,0,1,2,0,0};
    int n = v.size();
    int i = 0 , l = 0 ,r = n-1;
    while(i <= r){
        if(v[i] == 0){
            swap(v[i] , v[l]);
            l++;
            i++;
        }
        else if(v[i] == 1){
            i++;
        }
        else{
            swap(v[i] , v[r]);
            r--;
        }
    }

    for(auto it = v.begin() ; it != v.end() ; it++) cout<<*it<<" ";
   
}