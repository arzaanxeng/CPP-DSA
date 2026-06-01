#include <iostream>
#include<cmath>
# define int long long
using namespace std;
signed main(void){
    int n , count = 0;
    cout<<"Enter the number whose number factors you would like to know : ";
    cin>>n;
    for( int i = 1 ; i <= sqrt(n) ; i++){
       int j = n/i ;
       if( n%i == 0){
       if( j == i ) count++;
       else count += 2;
    }
}
    cout<<"The number of factors the number has is : "<<count;
return 0;
}

