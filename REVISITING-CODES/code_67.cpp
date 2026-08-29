// Recursion

#include <iostream>
using namespace std;

void f1(int n){
    if(n==1) return;
    cout<<n<<"\n";
    f1(n-1);
}

void f2(int n){
    if( n == 0 ) return;
    f2(n-1);
    cout<<n<<"\n";
}

void f(int n){
    if( n == 0 ) return;
    cout<<n<<endl;
    f(n-1);
    if(n != 1) cout<<n<<endl;
}


int main(void){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    f1(n);
    f2(n);
    cout<<endl;
    f(n);
}

/*


        f1(5)
          ↓ 
        print 5
        f1(4)
          ↓ 
        print 4
        f1(3)
          ↓ 
        print 3
        f1(2)
          ↓ 
        print 2
        f1(1)
          ↓ 
        return




f2(5)
   f2(4)
      f2(3)
         f2(2)
            f2(1)
               f2(0) → return
            print 1
         print 2
      print 3
   print 4
print 5




              GOING DOWN
                  ↓
        ┌─────────────────┐
f(5) →  │ print 5         │
f(4) →  │ print 4         │
f(3) →  │ print 3         │
f(2) →  │ print 2         │
f(1) →  │ print 1         │
f(0) →  │ RETURN          │
        └─────────────────┘
                  ↑
              COMING UP
              
*/