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
  printf("\nTriplet whose sum is equal to %d :\n",k);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int l=j+1;l<n;l++){
        if(arr[i]+arr[j]+arr[l]==k)
          printf("(%d,%d,%d) ,",arr[i],arr[j],arr[l]);
      }
    }
  }
  return 0;
}