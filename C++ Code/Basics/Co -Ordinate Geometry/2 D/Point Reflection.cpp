/* Q.WAP to find the reflection of a point( given by user) lie in plane (2D) .
        (i)   Reflection about X-axis
        (ii)  Reflection about Y-axis
        (iii) Reflection about orgin  */
#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter the X-coordinate : ";
    cin>>x;
    cout<<"Enter the Y-coordinate : ";
    cin>>y;
    cout<<"Reflection of ("<<x<<","<<y<<") about X-axis is ("<<x<<","<<-y<<")."<<endl;
    cout<<"Reflection of ("<<x<<","<<y<<") about Y-axis is ("<<-x<<","<<y<<")."<<endl;
    cout<<"Reflection of ("<<x<<","<<y<<") about the orgin is ("<<-x<<","<<-y<<").";
    return 0;
}