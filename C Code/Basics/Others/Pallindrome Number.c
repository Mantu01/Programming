#include<stdio.h>
int main(){
  int n;
  printf("Enter Number : ");
  scanf("%d",&n);
  int rev=0;
  for(int i=n;i>0;i/=10)
    rev=rev*10+i%10;
  if(rev==n)
    printf("%d is a pallindrome number.",n);
  else
    printf("%d is not a pallindrome number.",n);
  return 0;
}