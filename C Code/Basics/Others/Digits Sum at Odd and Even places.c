#include<stdio.h>
int main(){
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  int sum1=0,sum2=0,cnt=1;
  for(int i=n;i>0;i/=10,cnt++){
    if(cnt&1)
      sum1+=i%10;
    else
      sum2+=i%10;
  }
  if(cnt%2==0){
    printf("Sum of digits at Odd places in %d is %d .\n",n,sum1);
    printf("Sum of digits at Even places in %d is %d .\n",n,sum2);
  }
  else{
    printf("Sum of digits at Odd places in %d is %d .\n",n,sum2);
    printf("Sum of digits at Even places in %d is %d .\n",n,sum1);
  }
  return 0;
}
