#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter K = ";    
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"First occurence of "<<k<<" is in index "<<i<<".";
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==k){
            cout<<endl<<"Last occurence of "<<k<<" is in index "<<i<<".";
            break;
        }
    }
    return 0;
}