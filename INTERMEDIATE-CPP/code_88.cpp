#include<iostream>
using namespace std;

struct Student{
    string name;
    int marks;
};

bool cmp( Student a , Student b ){
    if( a.marks != b.marks ) return a.marks > b.marks;
    return a.name < b.name;
}

int main(void){
    int n ;
    cout<<"Enter the number of required Student's data : ";
    cin>>n;

    Student A[n];

    for( int i = 0 ; i < n ; i++ ){
        cout<<"Enter the Student name : ";
        cin>>A[i].name;
        cout<<"Enter the Student's mark : ";
        cin>>A[i].marks;
    }
    sort(A , A+n , cmp);
    for( int i = 0 ; i < n ; i++) cout<<A[i].name<<"     "<<A[i].marks<<endl;
}