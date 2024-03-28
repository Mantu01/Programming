#include<iostream>
using namespace std;
int main(){
    int ans=-1,n,Lsum,Rsum;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(ans<n){
        Lsum=0,Rsum=0;
        ans++;
        for(int i=0;i<ans;i++)
            Lsum+=arr[i];
        for(int i=ans+1;i<n;i++)
            Rsum+=arr[i];
        if(Lsum==Rsum){
            cout<<"Pivot index : "<<ans;
            break;
        }    
    }
    return 0;
}