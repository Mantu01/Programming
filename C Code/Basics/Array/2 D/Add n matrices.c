#include<stdio.h>
#include<string.h>
int main(){
  int n;
  printf("NOTE : for addition matrices number of row of all matrix should be equal and columns too.\n\n");
  printf("Enter the number of matrices : ");
  scanf("%d",&n);
  int r,c;
  printf("Enter the number of rows and columns : ");
  scanf("%d %d",&r,&c);
  int allMat[n][r][c];
  for(int i=0;i<n;i++){
    printf("\nEnter the elements of matrix %d :\n",i+1);
    for(int j=0;j<r;j++){
      for(int k=0;k<c;k++)
        scanf("%d",&allMat[i][j][k]);
    }
  }
  int sum[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      sum[i][j]=0;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<r;j++){
      for(int k=0;k<c;k++)
        sum[j][k]+=allMat[i][j][k];
    }
  }
  printf("\nResultant of sum of all matrices :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      printf("%d ",sum[i][j]);
    printf("\n");
  }
  return 0;
}