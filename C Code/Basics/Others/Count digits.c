#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  int ans=0;
  for(int i=n;i>0;ans++,i/=10);
  printf("\nNumber of digits in %d is %d.\n",n,ans);
  return 0;
}