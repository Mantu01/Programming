// Q. Reverse the digits of a number given by the user
#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=1;i<=a;i++)
        b*=i;
    cout<<"Factorial of "<<a<<" is "<<b;    
    return 0;
}