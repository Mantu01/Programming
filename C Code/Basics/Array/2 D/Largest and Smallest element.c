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
  int le=INT_MIN,se=INT_MAX;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
      if(arr[i][j]>le)
        le=arr[i][j];
      if(arr[i][j]<se)
        se=arr[i][j];
    }
  }
  printf("Largest elements : %d\n",le);
  printf("Smallest elements : %d",se);
  return 0;
}