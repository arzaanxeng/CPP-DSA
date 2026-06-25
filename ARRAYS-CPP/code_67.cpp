#include <iostream>
#include <vector>
using namespace std;

bool isVowel(char ch) {
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

void find_max_vowel_count(vector<char>& v, int k) {
    int n = v.size();

    int count = 0;

    // First window
    for (int i = 0; i < k; i++) {
        if (isVowel(v[i])) {
            count++;
        }
    }

    int ans = count;

    // Slide the window
    for (int i = k; i < n; i++) {

        // Add incoming character
        if (isVowel(v[i]))  count++;
        // Remove outgoing character
        if (isVowel(v[i - k]))  count--;
        ans = max(ans, count);
    }
    cout << "The maximum number of vowels in a subarray of size "
         << k << " is: " << ans;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<char> v(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> v[i];
    }
    cout << "Enter the size of the subarray: ";
    cin >> k;

    if (k <= 0 || k > n) {
        cout << "Invalid subarray size.";
        return 0;
    }
    find_max_vowel_count(v, k);
    return 0;
}