#include<stdio.h>
int main(){
  int n;
  printf("Enter Number : ");
  scanf("%d",&n);
  int ans=1;
  for(int i=2;i<=n;i++)
    ans*=i;
  printf("Factorial of %d is %d\n",n,ans);
  return 0;
}