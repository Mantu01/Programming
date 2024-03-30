#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int K;
  printf("Enter K : ");
  scanf("%d",&K);
  for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
  }
  K=K%n;
  int i=0,j=K-1;
  while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
  i=K,j=n-1;
  while(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    i++;
    j--;
  }
  printf("\nRotated Array :\n");
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}