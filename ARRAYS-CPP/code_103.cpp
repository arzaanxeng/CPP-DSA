// Perutuations
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void f(int idx , vector<int>& nums , vector<int>& path , vector<bool>& used ){
    if( idx == nums.size() ){
        for( int el : path ) cout<<el;
        cout<<endl;
        return;
    }

    for( int i = 0 ; i < nums.size() ; i++){ // We are using loops to take one element as the leading one and then apply recursion and backtracking on rest of the number
        if(!used[i]){
            path.push_back(nums[i]);
            used[i] = true;
            f(idx+1,nums,path,used);
            path.pop_back();
            used[i] = false;
        }
    }
}


int main(void){
    vector<int> nums = {1,6,9,3,5};
    vector<bool> used ( nums.size() , false );
    vector<int> path;
    f(0,nums,path,used);
}