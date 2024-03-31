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
  int ans=0;
  for (int i = 0; i < n; i++) {
    if(arr[i]==k)
      ans++;
  }
  printf("\n%d is the total occurence of %d in the array.\n",ans,k);
  return 0;
}