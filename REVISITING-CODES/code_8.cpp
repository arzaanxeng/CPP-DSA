// Compress a String
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout<<"Enter the required string : ";
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            count++;
        } else {
            cout << s[i - 1] << count;
            count = 1;
        }
    }
    // Print the last group
    cout << s.back() << count;

    return 0;
}