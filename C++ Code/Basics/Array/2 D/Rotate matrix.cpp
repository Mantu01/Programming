/* WAP to rotate a square matrix by 90⁰ in 
         (i) clockwise
        (ii) anti-clockwise        */
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the number of rows (columns) of the square matrix : ";
    cin>>a;
    int mat[a][a],mat1[a][a];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            cin>>mat[i][j];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            mat1[i][j]=mat[a-1-j][i];
    }
    cout<<endl<<"Rotated matrix by 90⁰ in clockwise :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            cout<<mat1[i][j]<<"  ";
        cout<<endl;    
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            mat1[i][j]=mat[j][a-1-i];
    }
    cout<<endl<<"Rotated matrix by 90⁰ in anti-clockwise :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++)
            cout<<mat1[i][j]<<"  ";
        cout<<endl;    
    }
    return 0;
}