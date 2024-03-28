// Q. Find the coordinates of the mid point of the line joining the two given points.
#include<iostream>
using namespace std;
int main(){
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;
    cout<<"For the first point :- Enter x1,y1,z1 : "<<endl;
    cin>>x1>>y1>>z1;
    cout<<"For the second point :- Enter x2,y2,z2 : "<<endl;
    cin>>x2>>y2>>z2;
    x3=(x1+x2)/2;
    y3=(y1+y2)/2;
    z3=(z1+z2)/2;
    cout<<"Mid-point : ("<<x3<<","<<y3<<","<<z3<<").";
    return 0;
}