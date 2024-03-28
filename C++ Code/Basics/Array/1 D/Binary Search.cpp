#include<iostream>
void BinarySearch1(int arr[], int n){
    int x,start=0,end=n-1,mid;
    std::cout<<"Enter the key element, x =  ";
    std::cin>>x;
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]>x)
            start=mid+1;
        else if(arr[mid]<x)    
            end=mid-1;
        else if(arr[mid]==x){
            std::cout<<"Element of index "<<mid<<" is equal to "<<x<<std::endl;
            break;
        }
        mid=(start+end)/2;
    }
}
void BinarySearch2(int arr[], int n){
    int x,start=0,end=n-1,mid;
    std::cout<<"Enter the key element, x =  ";
    std::cin>>x;
    mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]<x)
            start=mid+1;
        else if(arr[mid]>x)    
            end=mid-1;
        else if(arr[mid]==x){
            std::cout<<"Element of index "<<mid<<" is equal to "<<x<<std::endl;
            break;
        }
        mid=(start+end)/2;
    }
}
int main(){
    int n;
    std::cout<<"Enter the size of array : ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the elements either in increasing or decreasing order."<<std::endl;
    std::cin>>arr[0];
    std::cin>>arr[1];
    if(arr[0]>arr[1]){                                            // Sorted array list in decreasing order
        for(int i=2;i<n;i++){
            std::cin>>arr[i];
            if(arr[i-1]<=arr[i]){
                std::cout<<"Enter the elements in either increasing or decreasin order.";
                return 0;
            }
        }
        BinarySearch1(arr,n);
    }
    if(arr[0]<arr[1]){                                           // Sorted array list in increasing order
        for(int i=2;i<n;i++){
            std::cin>>arr[i];
            if(arr[i-1]>=arr[i]){
                std::cout<<"Enter the elements in either increasing or decreasin order.";
                return 0;
            }
        }
        BinarySearch2(arr,n);
    }
    
    return 0;
}