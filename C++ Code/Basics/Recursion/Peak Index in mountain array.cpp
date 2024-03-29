// Q. Find the peak index in a given array using recursion.
#include<iostream>
using namespace std;
int peakIndex(int* arr, int e, int s=0){
    if(s>=e)
        return s;
    int mid=s+(e-s)/2;
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1])
        return mid;
    if(arr[mid]<arr[mid+1])
        s=mid+1;
    else
        e=mid-1;
    return peakIndex(arr,e,s);    
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements of a mountain array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int PI=peakIndex(arr,n-1);    
    cout<<PI<<" is the Peak index, whose element's value = "<<arr[PI];
    delete []arr;
    return 0;
}