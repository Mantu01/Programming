#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"K = ";
    cin>>k;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Pair of indices  ";    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]*arr[j]==k)
                cout<<"("<<i<<","<<j<<") ,  ";
        }
    }
    cout<<"whose element's product is equal to K = "<<k;
    return 0;
}