#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    string x = to_string(a);
    string y = to_string(b);
    return x + y > y + x; // "334" > "31" --> this is true in case of string as comp occurs lexicographically !!!
}

int main() {
    vector<int> nums = {9, 53, 71, 1, 90, 0, 49, 58};
    sort(nums.begin(), nums.end(), cmp);
    string ans = "";
    for (int num : nums) ans += to_string(num);
    if (ans[0] == '0') cout << "0";
    else cout << ans;
    return 0;
}