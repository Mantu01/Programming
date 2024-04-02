#include<stdio.h>
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
  int Product=1;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      Product*=arr[i][j];
  }
  printf("Product of the elements : %d",sum);
  return 0;
}