import java.util.Scanner;

public class Transpose{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of rows : ");
    int r=sc.nextInt();
    System.out.print("Enter the number of columns : ");
    int c=sc.nextInt();
  int[][] mat=new int[r][c];
    System.out.println("Enter all the elements :");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        mat[i][j]=sc.nextInt();
    }
    if(r==c)
      trans(mat,r);
    else
      mat=trans(mat,r,c);
    System.out.println("Transpose of the given matrix :");
    for(int i=0;i<mat.length;i++){
      for(int j=0;j<mat[0].length;j++)
        System.out.print(mat[i][j]+" ");
      System.out.println(" ");
    }
  }
  public static void trans(int[][] mat, int n){
    for(int i=0;i<n;i++){
      for(int j=0;j<i;j++){
        int temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;
      }
    }
  }
  public static int[][] trans(int[][] mat,int r, int c){
    int[][] ans=new int[c][r];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        ans[j][i]=mat[i][j];
    }
    return ans;
  }
}