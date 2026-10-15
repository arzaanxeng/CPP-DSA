// COUNT SORT : Alphabets Sorting
#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<char> nums = {'a', 'g', 'f', 'd', 'u', 'y', 'r', 'e', 'd', 's', 'v', 'c', 'x', 'f', 'h', 'f', 'z', 'd', 'a', 'f', 'y', 'i', 'u', 'i', 'f', 'd', 'w', 'c', 'v', 'b', 'n', 'f', 'w', 'q', 'a', 'd', 'g', 'h', 'b', 'f', 'd'};
    int freq[26] = {0};
    for( int i = 0 ; i < nums.size() ; i++) freq[nums[i]-'a']++; // Stored the frequency of each element
    for( int i = 25 ; i >= 0 ; i--){
        while( freq[i] > 0 ){
            cout<<char(i+'a')<<" ";
            freq[i]--;
        }
    }
    return 0;
}