#include<iostream>
using namespace std;
int main(){
    int n,max=INT_MIN,smax=INT_MIN;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=max)
            smax=arr[i];
    }
    cout<<"Second larges element is "<<smax;
    return 0;
}