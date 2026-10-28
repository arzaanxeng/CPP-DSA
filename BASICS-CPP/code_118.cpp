#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(static_cast<unsigned char>(ch));
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string reverseVowels(string s) {
        int l = 0;
        int r = (int)s.size() - 1;
        
        while (l < r) {
            if (!isVowel(s[l])) l++;
            else if (!isVowel(s[r])) r--;
            else {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};
