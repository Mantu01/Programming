// WAP to multiply two matrices.
#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Enter the number of rows and columns of first matrix : "<<endl;
    cin>>a>>b;
    cout<<"Enter the number of rows and columns of second matrix : ";
    cin>>c>>d;
    int mat1[a][b];
    int mat2[c][d];
    cout<<"Enter the elements of the first matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>mat1[i][j];
    }
    cout<<"Enter the elements of the second matrix : "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++)
            cin>>mat2[i][j];
    }
    int mat3[a][d];        // For the resultant matrix rows =rows of 1st matrix and columns = columns of second matrix
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++){
            int sum=0;
            for(int k=0;k<b;k++)
                sum+=mat1[i][k]*mat2[k][j];
            mat3[i][j]=sum;
        }
    }
    cout<<"Product of the two matrix : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<d;j++)
        cout<<mat3[i][j]<<" ";
    cout<<endl;    
    }
    return 0;
}