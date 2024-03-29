#include<iostream>
using namespace std;
int main(){
    float p,i,y,SI;
    cout<<"enter the principle amount : ";
    cin>>p;
    cout<<"enter the interest rate : ";
    cin>>i;
    cout<<"enter the year : ";
    cin>>y;
    SI=p*i*y/100;
    cout<<endl;
    cout<<"Simple interest : "<<SI<<endl;
    cout<<"Total amount after "<<y<<" years = "<<p+SI;
    return 0;
}