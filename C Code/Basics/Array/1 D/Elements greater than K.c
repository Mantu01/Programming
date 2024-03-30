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
  int k;
  printf("Enter Key : ");
  scanf("%d",&k);
  printf("\nElements greater than %d :\n\n",k);
  for(int i=0;i<n;i++){
    if(arr[i]>k)
      printf("%d at index %d .\n",arr[i],i);
  }
  return 0;
}