#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements of mountain array :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int i=0,j=n-1;
  while(i<j){
    int mid=i+(j-i)/2;
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
      printf("%d is the peak index with value %d in the given array.\n",mid,arr[mid]);
      break;
    }
    else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1])
      i=mid+1;
    else
      j=mid+1;
  }
  return 0;
}