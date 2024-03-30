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
  bool isPallindrome=true;
  for(int i=0;i<n/2;i++){
    if(arr[i]!=arr[n-1-i])
      isPallindrome=false;
  }
  if(isPallindrome)
    printf("Given array is Pallindrome");
  else
    printf("Given array is not Pallindrome");
  return 0;
}