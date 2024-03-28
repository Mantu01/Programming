#include<iostream>
using namespace std;
int main(){
    int n,product=1;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        product*=arr[i];
    cout<<"Product of the elements : "<<product;    
    return 0;
}