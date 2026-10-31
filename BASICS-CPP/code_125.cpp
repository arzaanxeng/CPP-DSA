#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // unordered_map<char,int>m;
        // for( char ch : ransomNote ) m[ch]++;
        // for( int i = 0 ; i < magazine.size() ; i++){
        //     if(m.find(magazine[i]) != m.end()){
        //         m[magazine[i]]--;
        //         if(m[magazine[i]] == 0) m.erase(magazine[i]);
        //     }
        // }
        // return m.size() == 0;
        vector<int>freq(26);
        int count = ransomNote.size();
        for( int i = 0 ; i < magazine.size() ; i++) freq[magazine[i]-'a']++;
        for( int i = 0 ; i < ransomNote.size() ; i++){
            if(freq[ransomNote[i]-'a'] != 0 ){
                freq[ransomNote[i]-'a']--;
                count--;
            }
        }
        return count == 0;
    }
};