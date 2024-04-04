#include<stdio.h>
int main(){
  int r1,c1,r2,c2;
  printf("Enter the rows and columns of first matrix : ");
  scanf("%d %d",&r1,&c1);
  int mat1[r1][c1];
  printf("Enter all the elements of first matrix :\n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++)
      scanf("%d",&mat1[i][j]);
  }
  printf("Enter the rows and columns of second matrix : ");
  scanf("%d %d",&r2,&c2);
  if(c1!=r2){
    printf("Number of columns of first matrix should be equal to number of rows of second matrix.");
    return 0;
  }
  int mat2[r2][c2];
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++)
      scanf("%d",&mat2[i][j]);
  }
  int mat[r1][c2];
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
      int temp=0;
      for(int k=0;k<c1;k++){
        temp+=mat1[i][k]*mat2[k][j];
      }
      mat[i][j]=temp;
    }
  }
  printf("Resultant of product of two matrices :\n");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++)
      printf("%d ",mat[i][j]);
    printf("\n");
  }
  return 0;
}