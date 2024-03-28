// Q. Check wheather a number given by user is a pallindrome or not.
#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=a;i>0;i/=10){
        b=b*10+i%10;
    }
    if(a==b)
        cout<<a<<" is a pallindrome.";
    else 
        cout<<a<<" is not a pallindrome.";    
    return 0;
}