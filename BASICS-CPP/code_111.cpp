#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i = 1;
        vector<string> ans;
        while (i <= n) {
            string s = "";
            if (i % 3 == 0 && i % 5 == 0) s = "FizzBuzz";
            else if (i % 3 == 0) s = "Fizz";
            else if (i % 5 == 0) s = "Buzz";
            if (s.empty()) s = to_string(i);
            ans.push_back(s);
            i++;
        } 
        return ans;
    }
};