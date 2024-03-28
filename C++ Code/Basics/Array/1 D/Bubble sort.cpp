#include<iostream>
void ascarr(int arr[], int n){
    int a=n;
    for(int i=1;i<n;i++){            // Total (n-1) round of comparision is required.
        for(int j=0;j<a-1;j++){      // only (n-1) elements are require to sort, last element will be sorted automatically.
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        a--;        // After every round of comparision one (largest) element will be sorted
    }
    std::cout<<"Incresing order of sorted array : "<<std::endl;
    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<"  ";
}
void desarr(int arr[], int n){
    int a=n;
    for(int i=1;i<n;i++){            // Total (n-1) round of comparision is required.
        for(int j=0;j<a-1;j++){      // only (n-1) elements are require to sort, last element will be sorted automatically.
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        a--;        // After every round of comparision one (largest) element will be sorted
    }
    std::cout<<"Decresing order of sorted array : "<<std::endl;
    for(int i=0;i<n;i++)
        std::cout<<arr[i]<<"  ";
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
            break;
        case 2:
            desarr(arr,n);
            break;
        default :
            std::cout<<"Invalid option.";
    }
    return 0;
}