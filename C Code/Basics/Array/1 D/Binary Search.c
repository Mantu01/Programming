#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements in non-decreasing order :\n");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  int k;
  printf("Enter the key : ");
  scanf("%d",&k);
  int i=0,j=n-1;
  while(i<j){
    int mid=i+(j-i)/2;
    if(arr[mid]==k){
      printf("%d is present at index %d.\n",k,mid);
      return 0;
    }
    else if(arr[mid]>k)
      j=mid-1;
    else
      i=mid+1;
  }
  printf("%d is not present in the array.",k);
  return 0;
}