#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int main(){
  int n;
  printf("Enter Number : ");
  scanf("%d",&n);
  bool isPrime=true;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0)
      isPrime=false;
  }
  if(isPrime)
    printf("%d is a Prime Number.\n",n);
  else
    printf("%d is a not Prime Number.\n",n);
  return 0;
}