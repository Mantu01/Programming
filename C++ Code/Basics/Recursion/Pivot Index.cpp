// Q. Find the Pivot ( Sum of element in LSH = that of RHS ) index in a given array using recursion.
#include<iostream>
using namespace std;
int Lsum(int* arr, int i){
    if(i==0)
        return 0;
    return arr[0]+Lsum(arr+1,i-1);    
}
int Rsum(int* arr, int n, int i){
    if(i>n)
        return 0;
    return arr[i]+Rsum(arr,n,i+1);    
}
int PivotIndex(int* arr, int n, int i=0){
    if(i==n)
        return -1;
    if(Lsum(arr,i)==Rsum(arr,n,i+1))
        return i;
    return PivotIndex(arr,n,i+1);        
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int PI=PivotIndex(arr,n-1);
    if(PI==-1)
        cout<<"Pivot Index does not exist in the given array.";
    else    
        cout<<"Pivot index of the given array is "<<PI;
    delete []arr;
    return 0;
}