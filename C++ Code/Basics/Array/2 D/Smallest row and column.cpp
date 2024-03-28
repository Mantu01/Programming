// Q. Find the rows and columns with smallest sum in a 2D array.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the number of rows and columns of the array :" << endl;
    cin>>a>>b;
    int arr[a][b];
    cout << "Enter the elements :" << endl;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    int count,ss=INT_MAX;            // ss=smallest sum initialize with largest integer value
    for(int i=0;i<a;i++){
        int sum=0;
        for(int j=0;j<b;j++)
            sum+=arr[i][j];
        if(ss>sum)
            ss=sum,count=i;
    }
    cout<<endl<<"The smallest row is row no. "<<count<<" whose element's sum = "<<ss;
    ss=INT_MAX;
    for(int i=0;i<b;i++){
        int sum=0;
        for(int j=0;j<a;j++)
            sum+=arr[j][i];
        if(ss>sum)
            ss=sum,count=i;
    }
    cout<<endl<<"The smallest column is column no. "<<count<<" whose element's sum = "<<ss;
    
    return 0;
}