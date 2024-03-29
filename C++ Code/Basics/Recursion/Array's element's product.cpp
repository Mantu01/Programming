// Q. Find the product of the elements of a given array using recursion.
#include<iostream>
using namespace std;
int product(int* arr, int n){
    if(n==0)
        return 1;
    return arr[0]*product(arr+1,n-1);    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Product of the elements of the given array : "<<product(arr,n);    
    delete []arr;    
    return 0;
}