// Q. WAP to sort a given array using bubble sort using recursion.
#include<iostream>
using namespace std;
void Iswap(int* arr, int n){        // Swapping in increasing order.
    if(n==1)
        return;
    if(arr[0]>arr[1]){
        int temp=arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
    }    
    Iswap(arr+1,n-1);        
}
void Dswap(int* arr, int n){        // Swapping in decreasing order.
    if(n==1)
        return;
    if(arr[0]<arr[1]){
        int temp=arr[0];
        arr[0]=arr[1];
        arr[1]=temp;
    }    
    Dswap(arr+1,n-1);        
}
void bubbleSort(int* arr, int n,int x=0){
    if(n==1)
        return;
    if(x)
        Dswap(arr,n);
    else    
        Iswap(arr,n);
    bubbleSort(arr,n-1,x);    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"The sorted array in increasing order :"<<endl;    
    bubbleSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl<<"The sorted array in decreasing order :"<<endl;    
    bubbleSort(arr,n,1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    delete []arr;    
    return 0;
}