/* Q. Find the centroid of a triangle whose coordinates of the vertices are given.
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
    cout<<endl<<"Centroid of the triangle : ("<<(x1+x2+x3)/3<<","<<(y1+y2+y3)/3<<").";
    return 0;
}