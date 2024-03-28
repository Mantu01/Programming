#include<iostream>
void ascarr(int arr[], int n){
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j] ){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        }
    }
}
void desarr(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }    
        }
    }
}
int main(){
    int n,x;
    std::cout<<"Enter the size of array : ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the value of elements : "<<std::endl;
    for(int i=0;i<n;i++)
        std::cin>>arr[i];
    std::cout<<"Press 1 or 2 (1 for ascending and 2 for descending order of sorted array) : ";
    std::cin>>x;
    switch(x){
        case 1:
            ascarr(arr,n);
            std::cout<<"Incresing order of sorted array : "<<std::endl;
            break;
        case 2:
            desarr(arr,n);
            std::cout<<"Decresing order of sorted array : "<<std::endl;
            break;
        default :
            std::cout<<"Invalid option.";
    }
    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<"  ";
    return 0;
}