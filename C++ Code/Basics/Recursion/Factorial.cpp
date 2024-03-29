// Q. Find the factorial of n using recursion.
#include<iostream>
using namespace std;
int fac(int n){
    if(n==0 || n==1)
        return 1;
    return n*fac(n-1);    
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Factorial of "<<n<<" = "<<fac(n);
    return 0;
}