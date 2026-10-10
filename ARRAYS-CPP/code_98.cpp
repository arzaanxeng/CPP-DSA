
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

// This map stores the letters corresponding to each phone keypad digit.

map<char, string> keypad = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};

/*
    Recursive function f() generates every possible letter combination.
    s    : The input string containing digits.
    idx  : The index of the digit currently being processed.
    path : The combination currently being constructed.
    ans  : Stores all completed combinations.

    At every recursive call, we process one digit and choose one
    letter from its corresponding keypad mapping. We append that
    letter to path and recursively move to the next digit.
    Once the recursive call returns, we remove the chosen letter
    using pop_back() so that we can try the next available letter.
    
*/

void f(string& s, int idx, string& path, vector<string>& ans) {

    // BASE CASE:
    // If idx reaches the length of s, all digits have been processed.
    // Therefore, path contains one complete combination, which we
    // store in ans. We then return to explore other possibilities.
    if (idx == s.size()) {
        ans.push_back(path);
        return;
    }

    // STEP 1:
    // Extract the digit at the current index.
    // For example, if s = "23" and idx = 0, digit will be '2'.
    char digit = s[idx];

    // STEP 2:
    // Retrieve all letters corresponding to the current digit.
    // For digit '2', choices will be "abc".
    string choices = keypad[digit];

    // STEP 3:
    // Iterate through the available letters ONE AT A TIME.
    // Each iteration explores a separate branch of recursion.
    for (char choice : choices) {

        // Choose: Append the current letter to the combination.
        path.push_back(choice);

        // Explore: Recursively process the next digit.
        // idx + 1 moves us forward by one position in the input.
        f(s, idx + 1, path, ans);

        // Backtrack: Remove the previously chosen letter.
        // This restores path to its previous state, allowing us
        // to try another letter without affecting other branches.
        path.pop_back();
    }
}

int main(void) {

    // Read the digit string from the user.
    string s;
    cout << "Enter the required Number : ";
    cin >> s;

    // path is initially empty because no letters have been selected.
    string path = "";

    // ans stores every complete letter combination generated.
    vector<string> ans;

    // Start recursion from index 0 with an empty path.
    f(s, 0, path, ans);

    // Print all the generated combinations.
    for (string el : ans)
        cout << el << "  ";

    return 0;
}
