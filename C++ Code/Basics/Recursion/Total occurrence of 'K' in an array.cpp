// Q. Find the total number of occurrence of an element in a given array using recursion.
#include<iostream>
using namespace std;
int totalOccurrence(int* arr, int k, int n, int i=0){
    if(n==0)
        return i;
    if(arr[0]==k)
        i++;
    return totalOccurrence(arr+1,k,n-1,i);   
        
}
int main(){
    int n,k;
    cout<<"Enter K : ";
    cin>>k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Total number of occurrence of "<<k<<" is "<<totalOccurrence(arr,k,n);
    delete []arr;
    return 0;
}