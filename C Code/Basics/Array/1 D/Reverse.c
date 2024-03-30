#include<stdio.h>
#include<limits.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
  }
  printf("Reversed Array :\n");
  for (int i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}