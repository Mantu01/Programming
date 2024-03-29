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
  int le=INT_MIN,se=INT_MAX;
  for(int i=0;i<n;i++){
    if(arr[i]>le)
      le=arr[i];
    if(arr[i]<se)
      se=arr[i];
  }
  printf("Largest Element : %d .\n",le);
  printf("Smallest Element : %d .\n",se);
  return 0;
}