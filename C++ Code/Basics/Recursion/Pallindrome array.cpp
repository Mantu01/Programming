// Check a given array is pallindrome or not, using recursion.
bool checkPallindrome(int* arr, int n, int i=0){
    if(i>n)
        return true;
    if(arr[0]!=arr[n-1-i])
        return false;
    return checkPallindrome(arr+1,--n,++i);    
}
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the size of array : ";
    cin>>a;
    int* arr=new int[a];
    cout<<"Enter the elements :"<<endl;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    if(checkPallindrome(arr,a))
        cout<<"The given array is pallindrome.";
    else
        cout<<"The given array is not pallindrome.";    
    delete []arr;
    return 0;
}