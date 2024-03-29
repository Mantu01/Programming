// Q. Find the smallest and largest elements of an given array using recursion.
#include<iostream>
using namespace std;
int largestNum(int* arr, int n){
    if(n==1)
        return arr[0];
    int max=largestNum(arr,n-1);
    if(max>arr[n-1])    
        return max;
    else
        return arr[n-1];    
}int smallestNum(int* arr, int n){
    if(n==1)
        return arr[0];
    int max=smallestNum(arr,n-1);
    if(max>arr[n-1])    
        return arr[n-1];    
    else
        return max;
}
int main(){
    int n;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Largest element : "<<largestNum(arr,n)<<endl;
    cout<<"Smallest element : "<<smallestNum(arr,n)<<endl;
    delete []arr;
    return 0;
}