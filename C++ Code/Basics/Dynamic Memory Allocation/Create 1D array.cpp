// Create a 1D array with variable length which uses heap memory.
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the size of array :"<<endl;
    cin>>a;
    int *arr= new int[a];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<a;i++)
        cin>>arr[i];
    cout<<"The array is :"<<endl;
    for(int i=0;i<a;i++)
        cout<<arr[i]<<" ";
    delete []arr;        
    return 0;
}