// Create a jaggered array.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows : ";
    cin>>a;
    int* col = new int[a];
    for(int i=0;i<a;i++){
        cout<<"Enter the number of columns in row "<<i<<" : ";
        cin>>col[i];
    }
    int** arr = new int*[a];
    for(int i=0;i<a;i++)
        arr[i]= new int[col[i]];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<col[i];j++)
            cin>>arr[i][j];
    }
    cout <<endl<< "The given jaggered array is :" << endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<col[i];j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;    
    }
    for(int i=0;i<a;i++)
        delete []arr[i];
    delete []col;
    delete []arr;
    return 0;
}