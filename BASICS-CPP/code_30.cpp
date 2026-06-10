#include<iostream>
using namespace std;
int main(void){
    string s;
    cout<<"Enter the required word :"<<endl;
    getline(cin ,s);
    size_t n = s.size(); 
    for(int i = 1 ; i<= n ; i++){
         cout<<s[n-i];
    }

}
 