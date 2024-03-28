// Q. Find the nth fibonacci terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        a+=b;
        int temp=a;
        a=b;
        b=temp;
    }
    cout<<a;
    return 0;
}