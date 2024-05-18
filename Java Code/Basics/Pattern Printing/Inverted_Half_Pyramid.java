import java.util.*;
public class Inverted_Half_Pyramid{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter height : ");
    int n=sc.nextInt();
    for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++)
        System.out.print("* ");
      System.out.print("\n");
    }
  }
}