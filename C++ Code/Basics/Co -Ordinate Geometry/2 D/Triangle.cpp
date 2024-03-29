/* Q. Find the area of a triangle whose coordinates of the vertices are given.
    coordinates of vertices are given by user.    */

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Let A(x1,x2),B(x2,x3) and C(x3,y3) be the vertices of the triangle."
    <<endl<<"Enter x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2 : ";
    cin>>x2>>y2;
    cout<<"Enter x3 and y3 : ";
    cin>>x3>>y3;
    int A=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(A>0)
        cout<<"Area of triangle ABC = "<<A;
    else if(A<0)
        cout<<"Area of triangle ABC = "<<-A;
    else
        cout<<"Triangle doesn't exist.";
    return 0;
}