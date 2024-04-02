#include<stdio.h>
int sum(int* arr, int k,int n){
  int sum=0;
  for(int i=k;i<n;i++)
    sum+=arr[i];
  return sum;
}
int main(){
  int n1,n2,n3;
  printf("Enter the size of first array : ");
  scanf("%d",&n1);
  int arr1[n1];
  printf("Enter all the elements of first array :\n");
  for(int i=0;i<n1;i++)
    scanf("%d",&arr1[i]);
  printf("Enter the size of second array : ");
  scanf("%d",&n2);
  int arr2[n2];
  printf("Enter all the elements of second array :\n");
  for(int i=0;i<n2;i++)
    scanf("%d",&arr2[i]);
  int n=n1+n2;
  int arr[n];
  int i=0,j=0,k=0;
  while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j])
      arr[k++]=arr1[i++];
    else
      arr[k++]=arr2[j++];
  }
  while(i<n1)
    arr[k++]=arr1[i++];
  while(j<n2)
    arr[k++]=arr2[j++];
  printf("Merged array :\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}