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
  for(int i=0;i<n-1;i+=2){
    int temp= arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }
  printf("\nAlternate Swaped elements :\n");
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}