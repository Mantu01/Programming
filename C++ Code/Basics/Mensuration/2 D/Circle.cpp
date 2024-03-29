// WAP to calculate area and perimeter of a circle,radius is given by user.
#include<iostream>
#define PI 3.14
using namespace std;
int main(){
    float r;
    cout<<"Using pie =3.14"<<endl<<"Enter the radius : ";
    cin>>r;
    cout<<endl<<"Area = "<<PI*r*r<<endl;
    cout<<"Perimeter = "<<2*PI*r;
    return 0;
}