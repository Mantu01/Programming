// Q. WAP to move all zeros to left/right side and non zero element should 
//    lie in the same order same order in an array.
#include<iostream>
using namespace std;
void moveZerosToLeft(int* arr, int n){
    int j=n-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j--;
        }
    }
}
void moveZerosToRight(int* arr, int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int* arr = new int[n];
    cout<<"Enter all the elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    moveZerosToLeft(arr,n);   
    cout<<endl<<"Case 1: All zeros are moved to left :"<<endl; 
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";   
    moveZerosToRight(arr,n);   
    cout<<endl<<endl<<"Case 2: All zeros are moved to right :"<<endl; 
    for(int i=0;i<n;i++)
        cout<<arr[i]<<"  ";
    delete []arr;
    return 0;
}