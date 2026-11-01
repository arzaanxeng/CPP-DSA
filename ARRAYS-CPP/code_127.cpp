#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int,int,greater<int>>m;
        for( int i = 0 ; i < score.size() ; i++){
            m[score[i]] = i;
        }
        vector<string>ans(score.size());
        int rank = 1;
        for( const auto& [val,actual_idx] : m){
            if( rank == 1) ans[actual_idx] = "Gold Medal";
            else if( rank == 2) ans[actual_idx] = "Silver Medal";
            else if( rank == 3) ans[actual_idx] = "Bronze Medal";
            else ans[actual_idx] = to_string(rank);
            rank++;
        }
        return ans;
    }
};