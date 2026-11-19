#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int l = 0;
        int r = 0;
        int lastIndex = -1;
        vector<int> ans;

        while (l < s.size() && r < s.size()) {
            if (s[r] != c) {
                r++;
            }
            else {
                if (lastIndex == -1) {
                    if (l != r) {
                        ans.push_back(r - l);
                        l++;
                    }
                    else {
                        ans.push_back(0);
                        lastIndex = r;
                        l++;
                        r++;
                    }
                }
                else {
                    if (l != r) {
                        ans.push_back(min(abs(l - lastIndex), abs(r - l)));
                        l++;
                    }
                    else {
                        ans.push_back(0);
                        lastIndex = r;
                        l++;
                        r++;
                    }
                }
            }
        }

        // Remaining characters after the final occurrence of c
        while (l < s.size()) {
            ans.push_back(l - lastIndex);
            l++;
        }
        return ans;
    }
};
