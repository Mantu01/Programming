#include<stdio.h>
int main(){
  int a,b;
  printf("Enter base : ");
  scanf("%d",&a);
  printf("Enter Power : ");
  scanf("%d",&b);
  int ans=1;
  for(int i=1;i<=b;i++)
    ans*=a;
  printf("%d raised to power %d is %d .\n",a,b,ans);
  return 0;
}













