// Q. Find all the elements in a 2D array which is equal to 'K'.
#include<iostream>
using namespace std;
int main(){
    int a,b,K;
    cout<<"Enter K = ";
    cin>>K;
    cout << "Enter the number of rows and columns :" << endl;
    cin>>a>>b;
    int arr[a][b];
    cout << "Enter the elements :" << endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
            cin>>arr[i][j];
    }
    cout<<"Elements of ";
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i][j]==K)
                cout<<"( row "<<i<<", column "<<j<<") , ";
        }
    }
    cout<<"of given 2D array are equal to K = "<<K;
    return 0;
}