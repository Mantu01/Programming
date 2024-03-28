// Q. Check whether a number given by user is perfect number or not 
#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cout<<"Enter the number : ";
    cin>>a;
    for(int i=1;i<a;i++){
        if(a%i==0){
            b+=i;
        }
    }
    if(a==b)
        cout<<a<<" is perfect number.";
    else    
        cout<<a<<" is not perfect number.";
   return 0;
}