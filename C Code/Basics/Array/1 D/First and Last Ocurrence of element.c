#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  int k;
  printf("Enter the key : ");
  scanf("%d",&k);
  int i=0,j=n-1;
  while(i<j){
    if(arr[i]!=k)
      i++;
    if(arr[j]!=k)
      j--;
    if(arr[i]==k && arr[j]==k)
      break;
  }
  printf("\n%d index is the first and %d index is the last occurence of %d in the given array .\n",i,j,k);
  return 0;
}