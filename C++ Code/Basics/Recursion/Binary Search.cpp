// Q. Binary search using recursion.
#include<iostream>
using namespace std;
bool binaraySearch1(int* arr, int k, int e, int s=0){        // For decreasing order of array
    int mid=s+(e-s)/2;
    if(s>e)
        return 0;
    if(arr[mid]==k)
        return 1;
    if(arr[mid]>k)
        s=mid+1;
    if(arr[mid]<k)
        e=mid-1;
    return binaraySearch1(arr,k,e,s);    
}
bool binaraySearch2(int* arr, int k, int e, int s=0){        // For increasing order of array
    int mid=s+(e-s)/2;
    if(s>e)
        return 0;
    if(arr[mid]==k)
        return 1;
    if(arr[mid]<k)
        s=mid+1;
    if(arr[mid]>k)
        e=mid-1;
    return binaraySearch2(arr,k,e,s);    
}
int main(){
    int n,k;
    cout<<"Enter K = ";
    cin>>k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements either in increasing or decreasing order : "<<endl;
    cin>>arr[0]>>arr[1];
    if(arr[0]>arr[1]){
        for(int i=2;i<n;i++){
            cin>>arr[i];
            if(arr[i]>arr[i-1]){
                cout<<"Enter the element in either increasing or decreasing order for binary search.";
                return 0;
            }
        }
        if(binaraySearch1(arr,k,n-1))
            cout<<k<<" is present in the given array.";
        else    
            cout<<k<<" is not present in the given array.";
    }
    if(arr[0]<arr[1]){
        for(int i=2;i<n;i++){
            cin>>arr[i];
            if(arr[i]<arr[i-1]){
                cout<<"Enter the element in either increasing or decreasing order for binary search.";
                return 0;
            }
        }
        if(binaraySearch2(arr,k,n))
            cout<<k<<" is present in the given array.";
        else    
            cout<<k<<" is not present in the given array.";
    }
    delete []arr;    
    return 0;
}