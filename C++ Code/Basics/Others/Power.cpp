//  Take two numbers from the user and give first number raised to the power second number
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the base : ";
    cin>>a;                    // a = Base
    cout<<"Enter the exponent : ";
    cin>>b;                     // b = exponent
    int ans=1;
    for(int i=1;i<=b;i++)
        ans=ans*a;
    cout<<a<<" raised to the power "<<b<<" is equal to "<<ans;    
    return 0;
}