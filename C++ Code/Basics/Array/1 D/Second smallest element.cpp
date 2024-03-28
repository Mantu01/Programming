#include<iostream>
using namespace std;
int main(){
    int n,min=INT_MAX,smin=INT_MAX;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<smin && arr[i]!=min)
            smin=arr[i];
    }
    cout<<"Second larges element is "<<smin;
    return 0;
}