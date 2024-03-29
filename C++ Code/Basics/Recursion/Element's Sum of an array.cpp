// Q. Find the sum of the elements of an array, using recursion.
#include<iostream>
using namespace std;
int sum(int *arr, int n){
    if(n==0)
        return 0;
    return arr[0]+sum(arr+1,n-1);    
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Sum of the elements of the array : "<<sum(arr,n);
    delete []arr;    
    return 0;
}