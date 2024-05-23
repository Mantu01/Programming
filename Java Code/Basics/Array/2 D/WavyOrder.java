import java.util.Scanner;

public class WavyOrder{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the the number of rows : ");
    int r=sc.nextInt();
    System.out.print("Enter the number of columns : ");
    int c=sc.nextInt();
    int[][] mat=new int[r][c];
    System.out.println("Enter all the elements of the matrix :");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        mat[i][j]=sc.nextInt();
    }
    wavy(mat);
  }
  public static void wavy(int[][] mat){
    System.out.println("\nHorizontal Wavy Order :");
    for(int i=0;i<mat.length;i++){
      for(int j=0;j<mat[0].length;j++){
        if(i%2==0)
          System.out.print(mat[i][j]+" ");
        else
          System.out.print(mat[i][mat[0].length-1-j]+" ");
      }
    }
    System.out.println("\n\nVertical Wavy Order :");
    for(int i=0;i<mat[0].length;i++){
      for(int j=0;j<mat.length;j++){
        if(i%2==0)
          System.out.print(mat[j][i]+" ");
        else
          System.out.print(mat[mat.length-1-j][i]+" ");
      }
    }
  }
}