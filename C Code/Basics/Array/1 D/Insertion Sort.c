#include<stdio.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  for(int i=1;i<n;i++){
    int temp=arr[i],j=i-1;
    while(j>=0){
      if(arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
      }
      else
        break;
    }
    arr[j+1]=temp;
  }
  printf("Sorted Array :\n");
  for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
  return 0;
}