#include<iostream>
using namespace std;
int main(){
    int n,ans[2]={INT_MAX,0};
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]<ans[0]){
            ans[0]=arr[i];
            ans[1]=i;
        }
    }
    cout<<"Element of the value "<<ans[0]<<" in index "<<ans[1]<<" is the smallest element.";
    return 0;
}