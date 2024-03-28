// Q. Given an array, insert an element at given index 'K'.
#include<iostream>
#include<vector>
using namespace std;
int* insert(int* arr, int index, int num, int n){
    int* temp=new int[n];
    for(int i=0;i<index;i++)
        temp[i]=arr[i];
    temp[index]=num;
    for(int i=index+1;i<n;i++)
        temp[i]=arr[i-1];
    delete []arr;
    return temp;   
}
int main(){
    int n,x;
    cout<<"Enter the number of elements in initial array : ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter all the elements of initial array : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"Enter how many elements, you want to insert : ";    
    cin>>x;
    cout<<endl;
    for(int i=1;i<=x;i++){
        int index,num;
        cout<<endl<<"For the insertion of element "<<i<<" ;"<<endl<<"Enter index : ";
        cin>>index;
        cout<<"Enter number : ";
        cin>>num;
        if(index>n || index<0){
            cout << index<<" index does not exist in the given array." << endl;
            return 0;
        }
        arr=insert(arr,index,num,++n);        // For every insertion size of array will be increased by 1.
        cout<<endl<<"New array after inserting "<<num<<" at index "<<index<<" :"<<endl;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<"  ";
            cout<<endl;
    }
    delete []arr;
    return 0;
}