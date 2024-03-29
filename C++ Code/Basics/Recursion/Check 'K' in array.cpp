// Q. Check whether 'K' present in an given array or not, using recursion.
#include<iostream>
using namespace std;
bool checkElement(int *arr, int n, int k){
    if(n==0)
        return 0;
    if(arr[0]==k)
        return 1;
    return checkElement(arr+1,n-1,k);        
}
int main(){
    int n,k;
    cout<<"Enter K = ";
    cin>>k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(checkElement(arr,n,k))
        cout<<k<<" is present in the array.";
    else    
        cout<<k<<" is not present in the array.";
    delete []arr;    
    return 0;
}