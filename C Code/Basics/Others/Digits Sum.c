#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  int ans=0;
  for(int i=n;i>0;i/=10)
    ans+=i%10;
  printf("\nSum of digits in %d is %d.\n",n,ans);
  return 0;
}