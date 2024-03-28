// WAP to print the elements of a matrix in vertical wavy order.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows and number of columns : "<<endl;
    cin>>a>>b;
    int mat[a][b],mat1[b][a];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>mat[i][j];
    }
    cout<<"Case 1: Start from column 1 and top :- "<<endl;
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            if(j%2==0)
                cout<<mat[i][j]<<"  ";
            else
                cout<<mat[a-1-i][j]<<"  ";
                    
        }
    }
    cout<<endl<<endl<<"Case 2: start from colum 1 and bottom :-"<<endl;
    for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            if(j%2!=0)
                cout<<mat[i][j]<<"  ";
            else
                cout<<mat[a-1-i][j]<<"  ";
        }
    }
    cout<<endl<<endl<<"Case 3: start from last column and bottom :-"<<endl;
    for(int j=b-1;j>=0;j--){
        for(int i=0;i<a;i++){
            if(b%2==0){
                if(j%2==0)
                    cout<<mat[i][j]<<"  ";
                else
                    cout<<mat[a-1-i][j]<<"  ";
            }
            else{
                if(j%2!=0)
                    cout<<mat[i][j]<<"  ";
                else
                    cout<<mat[a-1-i][j]<<"  ";
            }
        }
    }
    cout<<endl<<endl<<"Case 4: start from last column and top :-"<<endl;
    for(int j=b-1;j>=0;j--){
        for(int i=0;i<a;i++){
            if(b%2==0){
                if(j%2==0)
                    cout<<mat[a-1-i][j]<<"  ";
                else
                    cout<<mat[i][j]<<"  ";
            }
            else{
                if(j%2!=0)
                    cout<<mat[a-1-i][j]<<"  ";
                else
                    cout<<mat[i][j]<<"  ";
            }
        }
    }
    return 0;
}