#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int i=0,k=0;
  while(i<n){
    if(arr[i]==0){
      int temp=arr[k];
      arr[k]=arr[i];
      arr[i]=temp;
      k++;
    }
    i++;
  }
  printf("Zero moved to left :\n");
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);
  return 0;
}