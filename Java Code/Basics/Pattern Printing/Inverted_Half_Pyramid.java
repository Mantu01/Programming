import java.util.*;
public class Inverted_Half_Pyramid{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter height : ");
    int n=sc.nextInt();
    System.out.println("Type 1 :");
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++)
        System.out.print("* ");
      System.out.print("\n");
    }
    System.out.println("Type 2 :");
    for(int i=1;i<=n;i++){
      for(int j=1;j<i;j++)
        System.out.print("  ");
      for(int j=i;j<=n;j++)
        System.out.print("* ");
      System.out.print("\n");
    }
  }
}