#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    void solve(int pos, string &digits, map<int,string> &m,
               string current, vector<string> &ans) {

        if (pos == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = m[digits[pos] - '0'];

        for (int i = 0; i < letters.size(); i++) {
            solve(pos + 1, digits, m,
                  current + letters[i], ans);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        map<int,string> m;
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";

        vector<string> ans;

        solve(0, digits, m, "", ans);

        return ans;
    }
};