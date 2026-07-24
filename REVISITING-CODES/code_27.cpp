// MAXIMUM number of vowels containing subarray with fixed length
#include<iostream>
#include<vector>
using namespace std;

bool is_vowel(char c){
    if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        return true;
    }
    return false;
}

void max_vowel(string s, int k){
    int sum = 0;
    for(int i = 0 ; i < k ; i++){
        if(is_vowel(s[i])){
            sum++;
        }
    }
    int ans = sum;
    for(int i = k ; i < s.size() ; i++){
        if(is_vowel(s[i])) sum++;
        if(is_vowel(s[i-k])) sum--;
        if(sum > ans) ans = sum;
    }

    // Output result
    cout<<"Maximum number of vowels in a substring of length "<<k<<" is : "<<ans;
}

int main(void){
    int k;
    string s;
    cout<<"Enter the required word : ";
    getline(cin,s);
    int n = s.size();
    cout<<"\nEnter the value of length of sub-string : ";
    cin>>k;
    if(k>n){
        cout<<"Please select the appropriate sub-array length !";
        return 0;
    }
    // Converting the string to lowercase
    for (char &c : s) {
        c = tolower(static_cast<unsigned char>(c));
    }
    max_vowel(s , k);
}