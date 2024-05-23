import java.util.Scanner;

public class AddMatrices{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Number of rows and columns of all matrices should be equal respectively.");
    System.out.print("Enter number of matrices : ");
    int n=sc.nextInt();
    if(n<2){
      System.out.println("Number of Matrices should be more than or equal to 2.");
      return ;
    }
    System.out.print("Enter the number of rows : ");
    int r=sc.nextInt();
    System.out.print("Enter the number of columns : ");
    int c=sc.nextInt();
    int[][][] mat=new int[n][r][c];
    for(int i=0;i<n;i++){
      System.out.println("Enter all the elements of Matrix "+(i+1)+" :");
      for(int j=0;j<r;j++){
        for(int k=0;k<c;k++)
          mat[i][j][k]=sc.nextInt();
      }
    }
    int[][] result=sumMat(mat[0],mat[1],r,c);
    for(int i=2;i<n;i++)
      result=sumMat(result,mat[i],r,c);
    System.out.println("\nSum of all the matrices :");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        System.out.print(result[i][j]+" ");
      System.out.println(" ");
    }
  }
  public static int[][] sumMat(int[][] a, int[][] b,int r, int c){
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        a[i][j]+=b[i][j];
    }
    return a;
  }
}