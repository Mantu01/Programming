// Q. Reverse the digits of a number given by the user
#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=a;i>0;i/=10)
        b=b*10+i%10;
    cout<<"Digit's reverse of "<<a<<" is "<<b;    
    return 0;
}