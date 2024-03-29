// Q. WAP to print the value of 'a' raised to power 'b' using recursion. a and b are given by user.
#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0)
        return 1;
    if(b%2==0)
        return power(a,b/2)*power(a,b/2);
    if(b%2!=0)
        return a*power(a,b/2)*power(a,b/2);
}
int main(){
    int a,b;
    cout<<"Enter base, a = ";
    cin>>a;
    cout<<"Enter exponent, b = ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" = "<<power(a,b);
    return 0;
}