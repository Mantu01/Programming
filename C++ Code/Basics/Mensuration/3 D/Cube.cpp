// WAP to calculate Volume,TSA and LSA of a cube.
#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"Enter the length of edge of the cube : ";
    cin>>a;
    cout<<"Volume = "<<a*a*a<<endl;
    cout<<"Total Surface Area = "<<6*a*a<<endl;
    cout<<"Lateral Surface Area = "<<4*a*a;
    return 0;
}