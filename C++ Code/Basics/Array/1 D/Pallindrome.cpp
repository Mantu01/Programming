#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    bool flag=true;    
    for(int i=0,j=n-1;i<j;i++,j--){
        if(arr[i]!=arr[j])
            flag=false;
    }
    if(flag)
        cout<<"Array is a pallindrome";
    else
        cout<<"Array is not a pallindrome";
    return 0;
}