#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        sum+=arr[i];
    cout<<"Sum of the elements : "<<sum;    
    return 0;
}