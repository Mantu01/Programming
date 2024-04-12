#include<stdio.h>
int main(){
  int r,c;
  printf("Enter Number of rows ans columns :\n");
  scanf("%d %d",&r,&c);
  int arr[r][c];
  printf("Enter all elements :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      scanf("%d",&arr[i][j]);
  }
  printf("Vertical wavy order :\n");
  for(int i=0;i<c;i++){
    for(int j=0;j<r;j++){
      if(i%2==0)
        printf("%d ",arr[j][i]);
      else
        printf("%d ",arr[r-1-j][i]);
    }
  }
  return 0;
}