#include <iostream>
#include <vector>
#include <string>
#include <cctype> 
using namespace std;

bool isVowel(char c) {
    char lower = tolower(c);
    return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main(void) {
    string s;
    cout << "Enter the required gibberish word: ";
    cin >> s;

    int n = s.size();
    // prefix[i] will store the number of vowels from index 0 to i-1
    vector<int> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + (isVowel(s[i]) ? 1 : 0);
    }

    int queries;
    cout << "Enter number of queries: ";
    cin >> queries;

    while (queries--) {
        int L, R;
        cout << "Enter 0-indexed range L and R (inclusive): ";
        cin >> L >> R;

        // Validation to prevent out of bounds errors
        if (L >= 0 && R < n && L <= R) {
            int vowelCount = prefix[R + 1] - prefix[L];
            cout << "Vowels in range [" << L << ", " << R << "]: " << vowelCount << "\n";
        } else {
            cout << "Invalid range!\n";
        }
    }

    return 0;
}
