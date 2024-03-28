// Q. Check wheather a year is leap or not.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the year : ";
    cin>>a;
    if((a%100!=0 || a%400==0 ) && (a%4==0))
        cout<<a<<" is a leap year";
    else
        cout<<a<<" is not a leap year";    
    return 0;
}