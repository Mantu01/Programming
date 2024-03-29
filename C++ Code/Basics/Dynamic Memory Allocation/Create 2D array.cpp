// Create a 2D array with variable size of rows and columns which uses heap memory.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows and columns of array :"<<endl;
    cin>>a>>b;
    int **arr= new int*[a];
    for(int i=0;i<a;i++)
        arr[i] = new int[b];
    cout<<"Enter the elements :"<<endl;    
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        cin>>arr[i][j];
    }
    cout<<endl<<"The matrix (2D array ) is : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    // Releasing memory
    for(int i=0;i<a;i++)
        delete []arr[i];
    delete []arr;    
    return 0;
}