// Q. Find the quadrant in which a given point lie.
#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Enter the X, Y and Z-coordinates :"<<endl;
    cin>>x>>y>>z;
    if(x>0 && y>0 && z>0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the first quadrant.";
    else if(x<0 && y>0 && z>0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the second quadrant.";
    else if(x<0 && y<0 && z>0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the third quadrant.";    
    else if(x>0 && y<0 && z>0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the fourth quadrant.";    
    else if(x>0 && y>0 && z<0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the fifth quadrant.";
    else if(x<0 && y>0 && z<0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the sixth quadrant.";
    else if(x<0 && y<0 && z<0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the seventh quadrant.";
    else if(x>0 && y<0 && z<0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the eigthth quadrant.";
    else if(x==0 && y!=0 && z!=0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in  the the Y-Z plane.";
    else if(x!=0 && y==0 && z!=0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the X-Z plane.";
    else if(x!=0 && y!=0 && z==0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie in the the X-Y plane.";
    else if(x==0 && y==0 && z!=0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie on the the Z-axis.";
    else if(x==0 && y!=0 && z==0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie  the the Y-axis.";
    else if(x!=0 && y==0 && z==0)
        cout<<"("<<x<<","<<y<<","<<z<<") lie  the the Z-axis.";
    else
        cout<<"("<<x<<","<<y<<","<<z<<") lie at the origin.";
    return 0;
}