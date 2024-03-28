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
    int count=0;
    cout<<"Elements of index ";
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<" "<<i<<" ,";
            count++;
        }
    }
    cout<<" are equal to "<<k<<endl<<"So,there are "<<count<<" elements equal to "<<k<<".";
    return 0;
}