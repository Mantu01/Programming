import java.util.*;

public class halfPyramidNumber{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter Height : ");
    int n=sc.nextInt();
    System.out.println("Type 1 :");
    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++)
        System.out.print(j+" ");
      System.out.print("\n");
    }
    System.out.println("Type 2 :");
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i+1;j++)
        System.out.print(j+" ");
      System.out.print("\n");
    }
  }
}