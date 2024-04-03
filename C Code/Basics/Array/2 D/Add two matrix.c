#include<stdio.h>
#include<limits.h>
int main(){
  int r,c;
  printf("NOTE : For addition, rows and columns of first matrix should be equal to that of second matrix.\n\n");
  printf("Enter the row and column of matrix : ");
  scanf("%d %d",&r,&c);
  int mat1[r][c];
  printf("Enter all elements of first matrix :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      scanf("%d",&mat1[i][j]);
  }
  int mat2[r][c];
  printf("Enter all elements of second matrix :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      scanf("%d",&mat2[i][j]);
  }
  int mat[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      mat[i][j]=mat1[i][j]+mat2[i][j];
  }
  printf("Added matrix :\n");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      printf("%d ",mat[i][j]);
    printf("\n");
  }
  return 0;
}