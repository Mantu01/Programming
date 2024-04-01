#include<stdio.h>
int sum(int* arr, int k,int n){
  int sum=0;
  for(int i=k;i<n;i++)
    sum+=arr[i];
  return sum;
}
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for (int i = 0; i < n; i++) {
    if(sum(arr,0,i-1)==sum(arr,i+1,n)){
      printf("\nIndex %d is the pivot index with value %d.\n",i,arr[i]);
      return 0;
    }
  }
  printf("Pivot index does not exist in the given array.");
  return 0;
}