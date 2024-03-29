#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=arr[i];
  printf("\nSum of all the elements is %d .\n",sum);
  return 0;
}