#include<stdio.h>
int main(){
  int n;
  printf("Enter the Year : ");
  scanf("%d",&n);
  if((n%4==0 && n%100!=0) || (n%100==0 && n%400==0))
    printf("%d is a leap yeat.",n);
  else
    printf("%d is not a leap yeat",n);
  return 0;
}