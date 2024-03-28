// Find the HCF and LCM all the given numbers.
#include<iostream>
#include<climits>
using namespace std;
int largestNum(int* arr, int n){
    int l=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>l)
            l=arr[i];
    }
    return l;
}
int numProduct(int* arr, int n){
    int p=1;
    for(int i=0;i<n;i++)
        p*=arr[i];
    return p;    
}
bool checkMultiple(int a, int* arr, int n){
    for(int i=0;i<n;i++){
        if(a%arr[i]!=0)
            return false;
    }
    return true;
}
int LCM(int* arr, int n){
    int lcm,l=largestNum(arr,n);
    for(int i=l;i<=numProduct(arr,n);i++){
        if(checkMultiple(i,arr,n)){
            lcm=i;
            break;
        }
    }
    return lcm;
}
bool checkFactor(int* arr,int n, int a){
    for(int i=0;i<n;i++){
        if(arr[i]%a!=0)
            return 0;
    }
    return 1;
}
int smallestNum(int* arr, int n){
    int s=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<s)
            s=arr[i];
    }
    return s;
}
int HCF(int* arr, int n){
    int hcf,s=smallestNum(arr,n);
    for(int i=1;i<=s;i++){
        if(checkFactor(arr,n,i))
            hcf=i;
    }
    return hcf;
}
int main(){
    int n;
    cout<<"Enter how many number you want for calculation : ";
    cin>>n;
    int* arr=new int[n];
    cout<<"Enter all "<<n<<" numbers :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<endl<<"LCM("<<arr[0];
    for(int i=1;i<n;i++)
        cout<<","<<arr[i];
    cout<<") = "<<LCM(arr,n);
    cout<<endl<<"HCF("<<arr[0];
    for(int i=1;i<n;i++)
        cout<<","<<arr[i];
    cout<<") = "<<HCF(arr,n);
    delete []arr;
    return 0;
}    