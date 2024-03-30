#include<stdio.h>
#include<stdbool.h>
int main(){
  int n;
  printf("Enter the size of array : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter all the elements :\n");
  for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("\nUnique Elements :\n");
  bool isUnique=true;
  bool notPresent=true;
  for(int i=0;i<n;i++){
    isUnique=true;
    for(int j=0;j<n;j++){
      if(j==i)
        continue;
      if(arr[i]==arr[j]){
        isUnique=false;
        break;
      }
    }
    if(isUnique){
      printf("%d at index %d .\n",arr[i],i);
      notPresent=false;
    }
  }
  if(notPresent)
    printf("No unique Elements are present in the array.");
  return 0;
}