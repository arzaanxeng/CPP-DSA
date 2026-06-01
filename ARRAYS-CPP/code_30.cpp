#include <iostream>
using namespace std;


/*                        === Finding vowels in a string --> My solution! ===
void search_vowels_count( string s , int l , int r){
    int count = 0;
    for(int i = l ; i <= r ; i++){
        if( s[i] == 'a'|| s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) count++;
        else if( s[i] == 'A'|| s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ) count++;
    }
    cout<<"\n\nThe total number of vowels present in the string are : "<<count;
}

int main(void){
    string s = "ndsAINCNNONAOONXENmqkmmzlaaiiuldJCIWcbudebnskjcnskmxbciyqgiwjpkpwSMSOPWjeoiuhev";
    int query , l , r ;
    cout<<"\n\nEnter the number of queries :";
    cin>>query;

    for(int i = 1 ; i <= query ; i++ ){
        cout<<"Enter the value of first index :";
        cin>>l;
        cout<<"Enter the value of second index :";
        cin>>r;
        search_vowels_count( s , l , r );
    }
}
*/


bool is_vowel(char ch) { 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main(void) {
    string s = "ndsAINCNNONAOONXENmqkmmzlaaiiuldJCIWwninsmopejdncuibewnxecbudebnskjcnskmxbciyqgiwjpkpwSMSOPWjeoiuhev";
    int n = s.size();

    int total_count = 0, prefix[n];
    for (int i = 0; i < n; i++) {
        if (is_vowel(s[i])) { 
            total_count++;
        }
        prefix[i] = total_count;
    }

    int query;
    cout << "\n\nEnter the number of queries :";
    cin >> query;

    for (int i = 1; i <= query; i++) {
        int l, r; // Declared inside or handled per iteration
        cout << "\nEnter the value of first index (l) :";
        cin >> l;
        cout << "Enter the value of second index (r) :";
        cin >> r;

        int total_vowels = 0;
        if (l == 0) {
            total_vowels = prefix[r];
        } else {
            total_vowels = prefix[r] - prefix[l - 1];
        }

        cout << "The total number of vowels present in the string range is: " << total_vowels << "\n";
    }

    return 0;
}