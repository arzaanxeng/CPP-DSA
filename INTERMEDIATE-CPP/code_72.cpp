/*

LARGEST ODD NUMBER FOUND IN THE STRING !!! 

class Solution {
public:
    string largestOddNumber(string num) {
        
        for (int i = num.size() - 1; i >= 0; i--) {
            // Check if the current digit is odd
            if ((num[i] - '0') % 2 != 0) {
                // Return prefix from index 0 of length (i + 1)
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

*/