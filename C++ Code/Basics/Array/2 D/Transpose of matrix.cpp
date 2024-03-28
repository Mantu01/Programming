// WAP to convert a matrix into its transpose.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows : ";
    cin>>a;
    cout<<"Enter the number of columns : ";
    cin>>b;
    int arr[a][b];
    int arr1[b][a];
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            arr1[j][i]=arr[i][j];
    }
    cout<<"Transpose of the given matrix :"<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++)
            cout<<arr1[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}