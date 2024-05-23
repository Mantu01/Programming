import java.util.Scanner;

public class MultiplyMatrices{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("NOTE : for matrix multiplication numbr of columns of first matrix should be equal to number of rows of second matrix .");
    int[][] rc=new int[2][2];
    for(int i=0;i<2;i++){
      System.out.print("Enter the number of rows of matrix "+(i+1)+" : ");
      rc[i][0]=sc.nextInt();
      System.out.print("Enter the number of columns of matrix "+(i+1)+" : ");
      rc[i][1]=sc.nextInt();
    }
    if(rc[0][1]!=rc[1][0]){
      System.out.println("Number of columns of first matrix should be equal to number of rows of second matrix.");
      return ;
    }
    int[][] mat1=new int[rc[0][0]][rc[0][1]];
    int [][] mat2=new int[rc[1][0]][rc[1][1]];
    for(int k=1;k<=2;k++){
      System.out.println("\nEnter all the elements of first matrix "+k+" :");
      for(int i=0;i<rc[k-1][0];i++){
        for(int j=0;j<rc[k-1][1];j++)
          if(k==1)
            mat1[i][j]=sc.nextInt();
          else
            mat2[i][j]=sc.nextInt();
      }
    }
    System.out.println("Result of the multiple of the two matrix  :");
    int[][] result=multiply(mat1,mat2,rc);
    for(int i=0;i<rc[0][0];i++){
      for(int j=0;j<rc[1][1];j++)
        System.out.print(result[i][j]+" ");
      System.out.println(" ");
    }
  }
  public static int[][] multiply(int[][] mat1, int[][] mat2, int[][] rc){
    int[][] result=new int[rc[0][0]][rc[1][1]];
    for(int i=0;i<rc[0][0];i++){
      for(int j=0;j<rc[1][1];j++){
        int sum=0;
        for(int k=0;k<rc[0][1];k++)
          sum+=mat1[i][k]*mat2[k][j];
        result[i][j]=sum;
      }
    }
    return result;
  }
}