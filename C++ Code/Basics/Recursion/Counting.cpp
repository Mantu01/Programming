// Print ascending (1 to n) and descending (n to 1) order of number using recursion.
#include<iostream>
using namespace std;
void asccount(int a){
    if(a==0)
        return ;
    asccount(a-1);
    cout<<a<<" ";
    return ;
}
void descount(int a){
    if(a==0)
        return ;
    cout<<a<<" ";
    descount(a-1);
    return ;
}
int main(){
    int n,x;
    cout<<"Press 0 for ascending and any other number for descending counting. : ";
    cin>>x;
    cout<<"Enter the number : ";
    cin>>n;
    if(x)
        descount(n);
    else
        asccount(n);
    return 0;
}