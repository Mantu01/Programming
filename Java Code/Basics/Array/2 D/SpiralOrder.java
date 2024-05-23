import java.util.Scanner;

public class SpiralOrder{
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
    System.out.println("Spiral order of the given matrix :");
    Spiral(mat);
  }
  public static void Spiral(int[][] mat){
    int minR=0,minC=0,maxR=mat.length-1,maxC=mat[0].length-1;
    int cnt=0;
    while(cnt!=mat[0].length*mat.length){
      for(int i=minC;i<=maxC;i++,cnt++)
        System.out.print(mat[minR][i]+" ");
      minR++;
      if(cnt==mat[0].length*mat.length)
        return ;
      for(int i=minR;i<=maxR;i++,cnt++)
        System.out.print(mat[i][maxC]+" ");
      maxC--;
      if(cnt==mat[0].length*mat.length)
        return ;
      for(int i=maxC;i>=minC;i--,cnt++)
        System.out.print(mat[maxR][i]+" ");
      maxR--;
      if(cnt==mat[0].length*mat.length)
        return ;
      for(int i=maxR;i>=minR;i--,cnt++)
        System.out.print(mat[i][minC]+" ");
      minC++;
      if(cnt==mat[0].length*mat.length)
        return ;
    }
  }
}