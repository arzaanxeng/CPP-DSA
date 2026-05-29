// Basics of string
#include<iostream>
using namespace std;
int main(void){
    // Conversion of int to character
    int n;
    cout<<"Enter the required number : ";
    cin>>n;
    char ch = n;
    cout<<"The corresponding character is : "<<ch;
    cout<<endl;

    // Conversion of character to integer
    char character;
    cout<<"Enter the required character :";
    cin>>character;
    int update = character;
    cout<<"The character ascii value is :"<<update;
    cout<<endl;

    // Checking wether the letter is lwercase or not
    char ch_;
    cout<<"Enter the alphabet :";
    cin>>ch_;
    if( (ch_ >= 97) && (ch_ <= 122)) cout<<"Lowercase";
    else cout<<"Not a lowercase";

}