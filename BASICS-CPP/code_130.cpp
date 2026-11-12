#include<iostream>
#include<set>
using namespace std;
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        set<string>ans;
        for( int i = 0 ; i < words.size() ; i++ ){
            for( int j = 0 ; j < words.size() ; j++ ){
                if(words[i] != words[j] && words[i].find(words[j]) != string::npos) ans.insert(words[j]);
            }
        }
        vector<string>v (ans.begin() , ans.end());
        return v;
    }
};