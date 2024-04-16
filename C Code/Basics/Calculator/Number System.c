#include<stdio.h>
void BtoD(){
  int a;
  printf("Enter the Binary Number : ");
  scanf("%d",&a);
  int res=0;
  int m=1;
  for(int i=a;i>0;i/=10){
    int r=i%10;
    if(r>1 || r<0){
      printf("\n%d is not a Binary Number.\n",a);
      return;
    }
    res+=r*m;
    m*=2;
  }
  printf("Decimal form of %d is %d",a,res);
}
void OtoD(){
  int a;
  printf("Enter Octal Number : ");
  scanf("%d",&a);
  int res=0;
  int m=1;
  for(int i=a;i>0;i/=10){
    int r=i%10;
    if(r>7){
      printf("\n%d is not a Octal number.",a);
      return ;
    }
    res+=r*m;
    m*=8;
  }
   printf("Decimal form of %d is %d",a,res);
}
int main(){
  int x;
  printf("Press 1 for Binary to Decimal coversion.\n");
  printf("Press 2 for Octal to Decimal coversion.\n");
  scanf("%d",&x);
  switch(x){
    case 1:
      BtoD();
      break;
    case 2:
      OtoD();
      break;
    default:
      printf("\nInvalid Option.\n");
  }
  return 0;
}