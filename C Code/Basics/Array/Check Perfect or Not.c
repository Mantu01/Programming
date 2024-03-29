#include<stdio.h>
int main(){
  int n;
  printf("Enter Number : ");
  scanf("%d",&n);
  int facSum=0;
  for(int i=1;i<n;i++){
    if(n%i==0)
      facSum+=i;
  }
  if(facSum==n)
    printf("%d is a Perfect Number.",n);
  else
    printf("%d is not a Perfect Number.",n);
  return 0;
}