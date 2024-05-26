import java.util.Scanner;

public class Counting{
  public static void count(int n){
    if(n==0){
      System.out.println("\n\nCounting in Increasing order :");
      return ;
    }
    System.out.print(n+" ");
    count(n-1);
    System.out.print(n+" ");
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter N : ");
    int n=sc.nextInt();
    System.out.println("\nCounting in Decreasing order :");
    count(n);
    System.out.println(" ");
  }
}