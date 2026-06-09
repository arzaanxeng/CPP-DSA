#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;// size -> 0
    vector<int>v1 = {1,2,3}; // size ->3 with elem 1,2,3
    vector<int>v2 (5,0);// size ->5 with all elemnts being zero

    /*Here in for each loop of vectors , the initialisation is done differently
    as a matter of fact that iteration is not done on the index but instead the 
    value at the index. */ 
    for( auto i : v2 ) cout<<i<<" ";
    cout<<"\n";

    // push_back , pop_back methods in vectors
    v1.push_back(10);
    v1.push_back(20);

    for( auto i : v1 ) cout<<i<<" ";
    cout<<"\nSize :"<<v1.size()<<endl;

    v1.pop_back();
    v1.pop_back();

    for( auto i : v1 ) cout<<i<<" ";
    cout<<"\nSize :"<<v1.size()<<endl;

    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.at(2)<<endl;


    return 0;
}