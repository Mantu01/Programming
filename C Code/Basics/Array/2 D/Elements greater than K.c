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
  int k;
  printf("Enter K :");
  scanf("%d",&k);
  printf("Elements greater than %d are :\n",k);
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]>k)
        printf("%d at index (%d,%d).\n",arr[i][j],i,j);
    }
  }
  return 0;
}