import java.util.Scanner;

public class AddMatrices{
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
      Transpose(mat,r);
    else
      mat=Transpose(mat);
    System.out.println("Transpose of the given matrix :");
    for(int i=0;i<mat.length;i++){
      for(int j=0;j<mat[].length;j++)
        System.out.print(mat[i][j]+" ");
      System.out.println(" ");
    }
  }
  public static void Transpose(int[][] mat, int n){
    
  }
}