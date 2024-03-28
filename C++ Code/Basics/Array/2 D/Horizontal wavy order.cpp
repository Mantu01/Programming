// WAP to print the elements of a matrix in horizontal wavy order.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the number of rows and columns :"<<endl;
    cin>>a>>b;
    int mat[a][b];
    cout<<"Enter the elemenents :"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>mat[i][j];
    }
    cout<<endl<<endl<<"Case 1: From left 1st row :-"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i%2==0)
                cout<<mat[i][j]<<" ";
            else    
                cout<<mat[i][b-1-j]<<" ";
        }
    }
    cout<<endl<<endl<<"Case 2: From right 1st row :-"<<endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(i%2==0)
                cout<<mat[i][b-1-j]<<" ";
            else    
                cout<<mat[i][j]<<" ";
        }
    }
    cout<<endl<<endl<<"Case 3: From left last row :-"<<endl;
    for(int i=a-1;i>=0;i--){
        for(int j=0;j<b;j++){
            if(a%2==0){
                if(i%2!=0)
                    cout<<mat[i][j]<<" ";
                else    
                    cout<<mat[i][b-1-j]<<" ";
            }
            else{
                if(i%2==0)
                    cout<<mat[i][j]<<" ";
                else    
                    cout<<mat[i][b-1-j]<<" ";
            }
        }
    }
    cout<<endl<<endl<<"Case 4: From right last row :-"<<endl;
    for(int i=a-1;i>=0;i--){
        for(int j=0;j<b;j++){
            if(a%2==0){
                if(i%2==0)
                    cout<<mat[i][j]<<" ";
                else    
                    cout<<mat[i][b-1-j]<<" ";
            }
            else{
                if(i%2!=0)
                    cout<<mat[i][j]<<" ";
                else    
                    cout<<mat[i][b-1-j]<<" ";
            }
        }
    }
    cout<<endl
    return 0;
}