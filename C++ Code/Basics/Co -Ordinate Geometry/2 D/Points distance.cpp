// Q. Find the distance between two points in plane (2D).Coordinates of the two points are given by the user.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x1,y1,x2,y2;
    cout<<"For the first point."<<endl<<"Enter the X-coordinate : ";
    cin>>x1;
    cout<<"Enter the Y-coordinate : ";
    cin>>y1;
    cout<<endl<<"For the second point."<<endl<<"Enter the X-coordinate : ";
    cin>>x2;
    cout<<"Enter the Y-coordinate : ";
    cin>>y2;
    cout<<endl<<"Distance between the points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is ";
    cout<<sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))<<".";
    return 0;
}