import java.util.Scanner;

public class Factorial{
  public static int fact(int n){
    if(n==0)
      return 1;
    return n*fact(n-1);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    if(n<0){
      System.out.println("Factorial of negative number is not defined.");
      return ;
    }
    System.out.println("Factorial of "+n+" = "+fact(n));
  }
}