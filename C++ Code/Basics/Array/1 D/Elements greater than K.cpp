#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"K = ";
    cin>>k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Elements of indices ";    
    for(int i=0;i<n-1;i++){
        if(arr[i]>k)
            cout<<i<<", ";
    }
    cout<<" are greater the K = "<<k;
    return 0;
}