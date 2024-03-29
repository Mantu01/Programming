// Q. Print first 'n' fibbonacci series .
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms : ";
    cin>>n;
    int a=1,b=0;
    for(int i=1;i<=n;i++){
        cout<<a<<"  ";
        int temp=a;
        a+=b;
        b=temp;
        
    }
    return 0;
}