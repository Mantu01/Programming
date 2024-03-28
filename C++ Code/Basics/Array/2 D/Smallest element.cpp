// WAP to find the smallest element in a 2D array.
#include<iostream>
using namespace std;
int main(){
    int r,c,ans=INT_MAX;
    cout<<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter the number of columns : ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter the elements "<<endl;
    for(int i=0;i<r;i++){
        cout<<endl<<"for row "<<i+1<<endl;
        for(int j=0;j<c;j++){
            cout<<"in column "<<j+1<<" : ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<ans)
                ans=arr[i][j];
        }
    }    
    cout<<endl<<"Smallest element : "<<ans;
    return 0;
}