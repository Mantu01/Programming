import java.util.*;

public class NumberPyramid{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter Height : ");
    int n=sc.nextInt();
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++)
        System.out.print(" ");
      for(int j=1;j<=i;j++)
        System.out.print(i+" ");
      System.out.print("\n");
    }
  }
}