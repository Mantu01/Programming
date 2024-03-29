// Q. Find the mid-point of line joining the two points in plane (2D).Coordinates of the two points are given by the user.
#include<iostream>
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
    cout<<endl<<"Mid-point the line joining the points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is ";
    cout<<"("<<(x1+x2)/2<<","<<(y1+y2)/2<<").";
    return 0;
}