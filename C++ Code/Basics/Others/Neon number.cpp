// Check wheather a number given by the user is a neon number or not
#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=a*a;i>0;i/=10){
        b+=i%10;
    }
    if(a==b)
        cout<<a<<" is a neon number.";
    else
        cout<<a<<" is not a neon.";    
    return 0;
}