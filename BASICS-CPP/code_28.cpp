#include<iostream>
using namespace std;

int main(void){
    string s;
    cout << "Enter the required sentence: ";
    getline(cin, s);
    int n = s.size();

    int max_count = 0, count = 0;

    for(int i = 0; i < n; i++){
        if(s[i] != ' '){
            count++; // Build the length of the current word
        }
        
        if(s[i] == ' ' || i == n - 1){
            if(count > max_count){
                max_count = count; 
            }
            count = 0; 
        }
    }

    cout << "The length of the longest word is: " << max_count << endl;
}