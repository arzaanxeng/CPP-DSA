// Count Vowels In Every Substring of fixed size 'k'
#include<iostream>
#include<vector>
using namespace std;

bool isvowel(char & c){
    if( c == 'a'|c == 'e'|c == 'i'|c == 'o'|c == 'u'|
        c == 'A'|c == 'E'|c == 'I'|c == 'O'|c == 'U') return true;
    else return false;
}

int main(void){
    vector<char>words = {'A','q','r','d','I','o','d','x','s','a'};
    int n = words.size();
    int k ;
    cout<<"Enter the value of fixed window size : ";
    cin>>k;
    if( k > n ){
        cout<<"\nPlease enter a valid Value !";
        return 0;
    }
    int sum = 0 ;
    for( int i = 0 ; i < k ; i ++) if(isvowel(words[i])) sum ++;
    cout<<sum<<"  ";  
    
    for( int j = k ; j < n ; j++){
        if(isvowel(words[j])) sum ++ ;
        if(isvowel(words[j-k])) sum --;
        cout<<sum<<"  ";
    }
}