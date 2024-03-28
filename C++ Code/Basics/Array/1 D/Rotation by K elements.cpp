#include<iostream>
using namespace std;
int main(){
    int k,n;
    cout<<"K = ";
    cin>>k;
    cout<<"Enter the size of array  : ";
    cin>>n;
    k=k%n;
    int arr[n];
    cout<<"Enter the value of elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0,j=n-1;i<j;i++,j--){                    // Reversing the array
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0,j=k-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=k,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"Rotated array by K elements : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    return 0;
}