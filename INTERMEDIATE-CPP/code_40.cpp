// Sum Of Numbers
#include<iostream>
using namespace std;


long long sum(int n) {
    if (n == 0) return 0;
    return n + sum(n-1);
}

int main(void){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if (n < 0) return -1;
    long long ans = sum(n);
    cout<<"The sum of "<<n<<" numbers is : "<<ans;
}