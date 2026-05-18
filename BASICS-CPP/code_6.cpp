// FINDING THE QUADRANT OF A POINT
#include<iostream>
using namespace std;
int main(void){
float x , y;
cout<<"ENter the value of x co-ordinate :";
cin>>x;
cout<<"ENter the value of y co-ordinate :";
cin>>y;
if( (x>0) && (y>0))
cout<<"The point ("<<x<<","<<y<<") lies in first quadrant";
if( (x<0) && (y>0))
cout<<"The point ("<<x<<","<<y<<") lies in second quadrant";
if( (x<0) && (y<0))
cout<<"The point ("<<x<<","<<y<<") lies in third quadrant";
if( (x>0) && (y<0))
cout<<"The point ("<<x<<","<<y<<") lies in fourth quadrant";
else if(x==0 && y==0)
cout<<"The point lies at the origin";
else if( x ==0 && y!=0)
cout<<"The point lies on the Y-AXIS";
else
cout<<"The point lies on the X-AXIS";
return 0;
}