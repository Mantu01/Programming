#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int product=1;
  for(int i=0;i<n;i++)
    product*=arr[i];
  printf("\nProduct of all the elements is %d .\n",product);
  return 0;
}