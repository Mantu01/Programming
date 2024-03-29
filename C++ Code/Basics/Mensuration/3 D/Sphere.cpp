// WAP to calculate Volume,TSA and CSA of a Sphere.
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter the radius : ";
    cin>>r;
    cout<<"Volume = "<<(3.0/4.0)*3.14*r*r*r<<endl;
    cout<<"TSA = CSA = "<<4*3.14*r*r<<endl;
    return 0;
}