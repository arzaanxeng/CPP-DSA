#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j = 0;
        for (int i = 0; i < typed.size(); i++) {
            // If the current characters match, move forward in name
            if (j < name.size() && typed[i] == name[j]) {
                j++;
            }
            // If they Don't match but they repeat in typed string 
            else if (i > 0 && typed[i] == typed[i - 1]) continue;
            
            // Character doesn't match and isn't a valid repeat
            else return false;
            
        }
        return j == name.size();
    }
};