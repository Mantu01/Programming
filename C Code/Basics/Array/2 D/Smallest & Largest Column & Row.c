#include<stdio.h>
#include<limits.h>
int main(){
  int r,c;
  printf("Enter the number of rows : ");
  scanf("%d",&r);
  printf("Enter the number of columns : ");
  scanf("%d",&c);
  int arr[r][c];
  printf("Enter all elements :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      scanf("%d",&arr[i][j]);
  }
  int l,s;
  int min=INT_MAX,max=INT_MIN;
  for(int i=0;i<r;i++){
    int sum=0;
    for(int j=0;j<c;j++)
      sum+=arr[i][j];
    if(sum>max){
      max=sum;
      l=i;
    }
    if(sum<min){
      min=sum;
      s=i;
    }
  }
  printf("Row %d is the largest row with value %d.\n",l,max);
  printf("Row %d is the smallest row with value %d.\n",s,min);
  min=INT_MAX,max=INT_MIN;
  for(int i=0;i<c;i++){
    int sum=0;
    for(int j=0;j<r;j++)
      sum+=arr[j][i];
    if(sum>max){
      max=sum;
      l=i;
    }
    if(sum<min){
      min=sum;
      s=i;
    }
  }
  printf("Column %d is the largest Column with value %d.\n",l,max);
  printf("Column %d is the smallest Column with value %d.\n",s,min);
  return 0;
}