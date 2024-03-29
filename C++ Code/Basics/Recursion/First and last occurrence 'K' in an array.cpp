// Q. Find the indices of first and last occurrence of an element in a given array using recursion.
#include<iostream>
using namespace std;
int firstOccurrence(int* arr,int k, int n,int i=0){
    if(i>=n)
        return -1;
    if(arr[i]==k)
        return i;
    return firstOccurrence(arr,k,n,i+1);     
}
int lastOccurrence(int* arr, int k, int n){       /* There is no need to write base case
            because this function will be called only when atleast one element is present*/   
    if(arr[n]==k)
        return n;
    return lastOccurrence(arr,k,n-1);
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
    if(firstOccurrence(arr,k,n)!=-1)
        cout<<firstOccurrence(arr,k,n)<<" is the first index and "<<
        lastOccurrence(arr,k,n-1)<<" is the last index of occurrence of  "<<k;
    else
        cout<<k<<" does not exist in the array.";    
    delete []arr;
    return 0;
}