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
  printf("\nPair elements whose sum is equal to %d :\n",k);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==k)
        printf("(%d,%d) ",arr[i],arr[j]);
    }
  }
  return 0;
}