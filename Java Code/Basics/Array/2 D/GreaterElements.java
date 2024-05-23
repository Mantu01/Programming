import java.util.Scanner;

public class GreaterElements{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter K = ");
    int k=sc.nextInt();
    System.out.print("Enter the number of rows : ");
    int r=sc.nextInt();
    System.out.print("Enter the number of columns : ");
    int c=sc.nextInt();
    int[][] mat=new int[r][c];
    System.out.println("Enter all the elements of the matrix :");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
        mat[i][j]=sc.nextInt();
    }
    System.out.print("Elements ");
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        if(mat[i][j]>k)
          System.out.print(mat[i][j]+" at index ("+i+","+j+"), ");
      }
    }
    System.out.println("are greater than "+k);
  }
}