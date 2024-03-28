#include<iostream>
using namespace std;
int main(){
    int n,K;
    cout<<"K = ";
    cin>>K;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Triplet of indices  ";    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]*arr[j]*arr[k]==K)
                    cout<<"("<<i<<","<<j<<","<<k<<") ,  ";
            }
        }
    }
    cout<<"whose element's product is equal to K = "<<K;
    return 0;
}