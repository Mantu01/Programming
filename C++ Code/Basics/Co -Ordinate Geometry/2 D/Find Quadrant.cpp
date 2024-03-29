// Q. Find the quadrant of a point lie in plane (2D).Coordinates of the points are given by the user.
#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the X and Y-coordinate : "<<endl;
    cin>>x>>y;
    if(x>0 && y>0)
        cout<<"("<<x<<","<<y<<") lies in the first quadrant.";
    else if(x>0 && y<0)
        cout<<"("<<x<<","<<y<<") lies in the fourth quadrant.";
    else if(x<0 && y>0)
        cout<<"("<<x<<","<<y<<") lies in the second quadrant.";
    else if(x<0 && y<0)    
        cout<<"("<<x<<","<<y<<") lies in the third quadrant.";
    else if(x==0 && y==0)
        cout<<"("<<x<<","<<y<<") lies at the orgin.";
    else if(x==0 && y!=0)
        cout<<"("<<x<<","<<y<<") lie on the Y-axis.";
    else
        cout<<"("<<x<<","<<y<<") lie on the X-axis.";
    return 0;
}