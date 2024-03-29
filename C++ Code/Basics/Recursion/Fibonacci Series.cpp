// Q. print the fibonacci series.
#include<iostream>
using namespace std;
int fibonacciTerms(int n){
    if(n==1 || n==2)
        return 1;
    int terms=fibonacciTerms(n-1)+fibonacciTerms(n-2);
    return terms;
}
int main(){
    int n,x;
    cout<<"Press 0 for nth term and any other number for n terms of fibonacci series . : ";
    cin>>x;
    cout<<"Enter n : ";
    cin>>n;
    if(x){
        cout<<n<<" Fibonacci terms are :"<<endl;
        for(int i=1;i<=n;i++)
        cout<<fibonacciTerms(i)<<" ";
    }
    else
        cout<<n<<"th terms : "<<fibonacciTerms(n);    
    return 0;
}