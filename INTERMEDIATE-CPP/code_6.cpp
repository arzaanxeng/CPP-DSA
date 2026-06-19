#include<iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>

using namespace std;
int main(void){
   pair<string , int > p;
   p = make_pair("Arzaan" , 19);
   cout<<p.first<<" , "<<p.second<<endl;
   pair<string , pair<int , int >> p1;
   p1 = make_pair("Arzaan" , make_pair(19 , 78));
    cout<<p1.first<<" , "<<p1.second.first<<" , "<<p1.second.second<<endl;
    
}