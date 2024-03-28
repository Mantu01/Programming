// Q. Add two matrices.
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the number of row of first matrix : ";
    cin>>a;
    cout<<"Enter the number of column of first matrix : ";
    cin>>b;
    cout<<"Enter the number of row of second matrix : ";
    cin>>c;
    cout<<"Enter the number of columns of second matrix : ";
    cin>>d;
    if(a!=c || b!=d){
        cout<<"Number of rows and columns of first matrix should be equal to number of rows and columns of second matrix for matrix addition.";
        return 0;
    }
    int arr1[a][b],arr2[a][b];        // c=a and d=b.
    cout<<"Enter the elements for first matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>arr1[i][j];
    }
    cout<<"Enter the elements for second matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>arr2[i][j];
    }
    cout<<"Resultant of sum of the two matrices : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cout<<arr1[i][j]+arr2[i][j]<<" ";\
        cout<<endl;
    }    
    return 0;
}