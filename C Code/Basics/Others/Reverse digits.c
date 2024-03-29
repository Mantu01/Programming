#include<stdio.h>
int main(){
  int n;
  printf("Enter Number : ");
  scanf("%d",&n);
  int res=0;
  for(int i=n;i>0;i/=10)
    res=res*10+i%10;
  printf("\nReversed digits of %d is %d.\n",n,res);
  return 0;
}