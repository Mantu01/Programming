import java.util.Scanner;

public class MaxMinElement{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
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
    int min=mat[0][0],max=mat[0][0];
    for(int i=0;i<r;i++){
      for(int j=0;j<c;j++){
        if(mat[i][j]<min)
          min=mat[i][j];
        if(mat[i][j]>max)
          max=mat[i][j];
      }
    }
    System.out.println("Largesst element in the given matrix : "+max);
    System.out.println("Smallest element in the given matrix : "+min);
  }
}