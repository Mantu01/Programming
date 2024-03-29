#include<stdio.h>
int main(){
  int n;
  printf("Enter the Number : ");
  scanf("%d",&n);
  int oddSum=0,evenSum=0;
  /* Formulae :
  oddSum = n*n
  evenSum=n*(n+1)/2*/
  for(int i=1;i<=2*n;i++){
    if(i%2==0)
      evenSum+=i;
    else
      oddSum+=i;
  }
  printf("Sum of first %d Even Numbers = %d.\n",n,evenSum);
  printf("Sum of first %d Odd Numbers = %d.",n,oddSum);
  return 0;
}