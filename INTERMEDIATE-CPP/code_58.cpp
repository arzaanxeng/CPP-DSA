// Generate the larget palindrome 
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int largestPalindrome(const string& s){
    vector<int>lowercase(26,0);
    vector<int>uppercase(26,0);
    // Storing the frequency of alphabets of the scentence
    for( int i = 0 ; i < s.size() ; i++){
        if(s[i] >= 'a') lowercase[s[i] - 'a']++;
        else uppercase[s[i] - 'A']++;
    }
    int count = 0 , odd = 0;
    for( int i = 0 ; i < 26 ; i++){
        if(lowercase[i]%2 == 0) count += lowercase[i];
        else {
        count += lowercase[i] - 1;
        odd = 1;
        }

        if(uppercase[i]%2 == 0) count += uppercase[i];
        else{
            count += lowercase[i] - 1;
            odd = 1;
        }
    }
    return count + odd ;
}

int main(void){
    string s;
    cout<<"Enter the required word : ";
    cin>>s;
    int ans = largestPalindrome(s);
    cout<<"The largest palindrome is of size : "<<ans;
}