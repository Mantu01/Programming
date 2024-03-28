// Q. Find the sum of the digits of the number given by the user
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number : ";\
    cin>>a;
    int ans=0;
    for(int i=a;i>0;i/=10)
        ans+=i%10;
    cout<<"Sum of the digits of the number "<<a<<" is "<<ans;    
    return 0;
}         