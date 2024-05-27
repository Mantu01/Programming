import java.util.Scanner;

public class FibonacciTerms{
  public static int fib(int n){
    if(n==1 || n==2)
      return 1;
    return fib(n-1)+fib(n-2);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    System.out.println(n+" th fibonacci term : "+fib(n));
  }
}