// Q. Find the first n pallindrome number where n is number given by the user.
#include<iostream>
using namespace std;
int main(){
    int n,a=10;
    cout<<"n = ";
    cin>>n;
    while(n>0){
        int b=0;
        for(int i=a;i>0;i/=10){
            b=b*10+i%10;
        }
        if(a==b){
            cout<<a<<"  ";
            n--;
        }
        a++;    
    }
    return 0;
}