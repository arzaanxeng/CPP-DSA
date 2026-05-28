//
//  main.cpp
//  CPP3
//
//  Created by SYED ARZAAN on 08/01/26.
//

#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout<<"ENTER THE NUMBER : "<< endl;
    cin>>n;
    if(n>99 && n<1000){
        cout<<"THE NUMBER IS A 3 DIGIT NUMBER"<<endl;
    }
    else{
        cout<<"IT IS NOT A 3 DIGIT NUMBER "<<endl;
    }
    return 0;
}
