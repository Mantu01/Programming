// WAP to calculate Volume,TSA and CSA of a Cylinder.
#include<iostream>
using namespace std;
int main(){
    float r,h;
    cout<<"Enter the base radius : ";
    cin>>r;
    cout<<"Enter the height : ";
    cin>>h;
    cout<<"Volume = "<<3.14*r*r*h<<endl;
    cout<<"Total Surface Area = "<<2*3.14*r*(r+h)<<endl;
    cout<<"Curved Surface Area = "<<2*3.14*r*h;
    return 0;
}