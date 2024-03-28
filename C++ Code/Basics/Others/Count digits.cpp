// Q. Find the number of digits of a number given by the user.
#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cout<<"Enter the number : ";
    cin>>a;
    while(a>0){
        b++;
        a/=10;
    }
    cout<<endl<<"Number of digits in the given number is "<<b;
    return 0;
}