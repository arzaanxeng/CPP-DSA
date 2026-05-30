#include<iostream>
using namespace std;

int main(void){
   string s = "aaaabbbbbbbbbcccccdddddeeeeeffffffxgggx";
   int n = s.size(), count = 1;
   
   for(int i = 0 ; i < n ; i++){
    // If we are at the last character OR the next character is different
    if(i + 1 == n || s[i] != s[i+1]){
        cout << s[i] << count;
        count = 1; // Reset for the next group
    }
    else {
        count++;
    }
   }
   cout << endl;
}
