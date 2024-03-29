// Print the odd and even number between two given numbers (Given by user).
#include<iostream>
using namespace std;
void printeven(int s, int e){
    if(s%2!=0)
        s++;
    for(int i=s;i<e;i+=2)
        cout<<i<<"  ";
}
void printodd(int s, int e){
    if(s%2==0)
        s++;
    for(int i=s;i<e;i+=2)
        cout<<i<<"  ";
}
int main(){
    int a,b;
    cout<<"Enter the two numbers : "<<endl;
    cin>>a>>b;
    cout<<" Odd numbers between "<<a<<" and "<<b<<" : ";
    if(a<b)
        printodd(a,b);
    if(a>b)
        printodd(b,a);
    cout<<endl<<endl;
    cout<<" Even numbers between "<<a<<" and "<<b<<" : ";
    if(a<b)
        printeven(a,b);
    if(a>b)
        printeven(b,a);
    return 0;
}