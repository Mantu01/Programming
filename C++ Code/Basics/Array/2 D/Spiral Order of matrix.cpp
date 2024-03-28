// WAP to print the elements of a matrix in spiral order.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows and columns :"<<endl;
    cin>>a>>b;
    int mat[a][b];
    int t=a*b,sc=0,sr=0,lc=b-1,lr=a-1;
    cout<<"Enter the elemenents :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>mat[i][j];
    }
    cout<<endl<<"Spiral order of the given matrix :"<<endl;
    while(t!=0){
        for(int i=sc;i<=lc;i++){
            cout<<mat[sr][i]<<" ";
            if(t==0)
                return 0;
            t--;
        }
        sr++;
        for(int i=sr;i<=lr;i++){
            cout<<mat[i][lc]<<" ";
            if(t==0)
                return 0;
            t--;
        }
        lc--;
        for(int i=lc;i>=sc;i--){
            cout<<mat[lr][i]<<" ";
            if(t==0)
                return 0;
            t--;
        }
        lr--;
        for(int i=lr;i>=sr;i--){
            cout<<mat[i][sc]<<" ";
            if(t==0)
                return 0;
            t--;
        }
        sc++;
        
    }
    return 0;
}