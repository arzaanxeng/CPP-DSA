/*
Figure out wether the string is rotated by 2 elements clockwise or anti-clockwise or not?
*/
/*
#include <iostream>
#include <string>
using namespace std;

bool clockwise(string s1, string s2) {
    if (s1.length() != s2.length() || s1.length() < 2) return false;

    char x = s1[s1.size() - 1];
    char y = s1[s1.size() - 2];
    
    int idx = s1.size() - 3;
    while (idx >= 0) {
        s1[idx + 2] = s1[idx];
        idx--;
    } 
    s1[0] = y;
    s1[1] = x;
    
    return s1 == s2;
}

bool anticlockwise(string s1, string s2) {
    if (s1.length() != s2.length() || s1.length() < 2) return false;

    char x = s1[0];
    char y = s1[1];
    
    int idx = 2;
    
    while (idx < s1.size()) {
        s1[idx - 2] = s1[idx];
        idx++;
    } 
    s1[s1.size() - 2] = x;
    s1[s1.size() - 1] = y;
    
    return s1 == s2;
}

int main() {
    string s1, s2;
    cout << "Enter the required word: ";
    cin >> s1;
    cout << "Enter the corresponding rotated word: ";
    cin >> s2;

    bool isClockwise = clockwise(s1, s2);
    bool isAnticlockwise = anticlockwise(s1, s2);

    if (isClockwise || isAnticlockwise) {
        cout << "\nResult: True (Rotated by 2 places)" << endl;
        if (isClockwise) cout << "-> Direction: Clockwise" << endl;
        if (isAnticlockwise) cout << "-> Direction: Anti-clockwise" << endl;
    } else {
        cout << "\nResult: False (Not a 2-place rotation)" << endl;
    }

    return 0;
}*/

#include <iostream>
#include <string>
using namespace std;

bool isRotatedBy2(string s1, string s2) {
    if (s1.length() != s2.length() || s1.length() < 2) 
        return false;

    int n = s1.length();

    // Clockwise: 
    string clockwise = s1.substr(n - 2) + s1.substr(0, n - 2);

    // Anti-clockwise: 
    string antiClockwise = s1.substr(2) + s1.substr(0, 2);

    return (s2 == clockwise || s2 == antiClockwise);
}

int main() {
    string s1, s2;
    cout << "Enter the required word: ";
    cin >> s1;
    cout << "Enter the corresponding rotated word: ";
    cin >> s2;

    if (isRotatedBy2(s1, s2)) {
        cout << "\nResult: True (Rotated by 2 places)" << endl;
    } else {
        cout << "\nResult: False (Not a 2-place rotation)" << endl;
    }
    return 0;
}