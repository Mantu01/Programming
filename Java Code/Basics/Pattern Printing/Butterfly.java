import java.util.*;

public class Butterfly{
    public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter n = ");
    int n=sc.nextInt();
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++)
        System.out.print("* ");
      for(int j=1;j<=2*(n-i);j++)
        System.out.print("  ");
      for(int j=1;j<=i;j++)
        System.out.print("* ");
      System.out.print("\n");
    }
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++)
        System.out.print("* ");
      for(int j=1;j<=2*(i-1);j++)
        System.out.print("  ");
      for(int j=i;j<=n;j++)
        System.out.print("* ");
      System.out.print("\n");
    }
  }
}