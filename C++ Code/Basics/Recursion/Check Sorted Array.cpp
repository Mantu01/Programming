// Q. Check whether a given array is sorted or not, using recursion.
#include<iostream>
using namespace std;
bool checkSortArray1(int *arr, int n){
    if(n==0 || n==1)
        return 1;
    if(arr[0]>arr[1])
        return 0;
    return checkSortArray1(arr+1,n-1);        
}
bool checkSortArray2(int *arr, int n){
    if(n==0 || n==1)
        return 1;
    if(arr[0]<arr[1])
        return 0;
    return checkSortArray2(arr+1,n-1);        
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl;
    if(checkSortArray1(arr,n))
        cout<<"The given array is sorted in ascending order.";
    else if(checkSortArray2(arr,n))
        cout<<"The given array is sorted in descending order.";
    else
        cout<<"The given array is not sorted.";
    delete []arr;    
    return 0;
}