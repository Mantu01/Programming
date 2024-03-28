// Q. Find the distace of line joining the two given points.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,y1,z1,x2,y2,z2;
    cout<<"For the first point :- Enter x1,y1,z1 : "<<endl;
    cin>>x1>>y1>>z1;
    cout<<"For the second point :- Enter x2,y2,z2 : "<<endl;
    cin>>x2>>y2>>z2;
    float d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
    cout<<"Distance between the points ("<<x1<<","<<y1<<","<<z1<<") and ("<<x2<<","<<y2
    <<","<<z2<<") = "<<d;
    return 0;
}