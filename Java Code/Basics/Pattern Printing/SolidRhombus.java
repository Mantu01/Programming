import java.util.*;

public class SolidRhombus{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter size of side : ");
    int n=sc.nextInt();
    for(int i=1;i<=n;i++){
      for(int j=i;j<n;j++)
        System.out.print("  ");
      for(int j=1;j<=i;j++)
        System.out.print("*  ");
      for(int j=i;j<n;j++)
        System.out.print("*  ");
      for(int j=1;j<i;j++)
        System.out.print("  ");
      System.out.print("\n");
    }
  }
}