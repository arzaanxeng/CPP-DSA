// Sqrt of a number --> Generalised
#include<iostream>
#include<math.h>
using namespace std;

int power(int a , float b){
    if (a <= 0) {
        if (a == 0 && b > 0) return 0;
        if (b == 0) return 1;
    }
    int ans = round(exp(b * log(a)));
    return ans;
}


int main(void){
    int a ;
    float b;
    cout<<"Enter the number :";
    cin>>a;
    cout<<"Enter the power raised to the number :";
    cin>>b;
    cout<<power(a,b);

}
