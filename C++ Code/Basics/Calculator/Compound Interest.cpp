#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float p,t,r;
    cout<<"Enter the principle amount : ";
    cin>>p;
    cout<<"Enter the year : ";
    cin>>t;
    cout<<"Enter the rate : ";
    cin>>r;
    float TA=p*pow(1+r/100,t);
    cout<<"Compound Interest after "<<t<<" years = "<<TA-p;
    cout<<endl<<"Total amount = "<<TA;
    return 0;
}