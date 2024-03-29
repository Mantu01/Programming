// Q. Find the sum of the elements of a given array using recursion.
#include<iostream>
using namespace std;
int sum(int* arr, int n){
    if(n==0)
        return 0;
    return arr[0]+sum(arr+1,n-1);    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Sum of the elements of the given array : "<<sum(arr,n);    
    delete []arr;    
    return 0;
}