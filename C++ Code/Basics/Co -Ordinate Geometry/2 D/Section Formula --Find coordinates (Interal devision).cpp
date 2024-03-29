/* Find the the coordinates of the point which divides the the line joining two points 
    in ration m:n.Coordinates of the points value of m and n are given by the user.      */
#include<iostream>
using namespace std;
int main(){
    float x1,y1,x2,y2,m,n;
    cout<<"For the first point."<<endl<<"Enter the X-coordinate : ";
    cin>>x1;
    cout<<"Enter the Y-coordinate : ";
    cin>>y1;
    cout<<endl<<"For the second point."<<endl<<"Enter the X-coordinate : ";
    cin>>x2;
    cout<<"Enter the Y-coordinate : ";
    cin>>y2;
    cout<<"Let the required points devid";
    cout<<"Coordinates of the point which divides the line in the ratio m:n."<<endl<<"Enter m : ";
    cin>>m;
    cout<<"Enter n : ";
    cin>>n;
    int x3,y3;        // coordinates of required point.
    x3=(x2*m+x1*n)/(m+n);
    y3=(y2*m+y1*n)/(m+n);
    cout<<endl<<"("<<x3<<","<<y3<<") divides the line joining ("<<x1<<","<<y1<<") and ("<<x2
    <<","<<y2<<") in ratio "<<m<<":"<<n<<".";
    return 0;
}