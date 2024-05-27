import java.util.Scanner;

public class FirstOddEvenSum{
  public static int sumEven(int n){
    if(n==0)
      return 0;
    if(n%2==0)
      return n+sumEven(n-1);
    else
      return sumEven(n-1);
  }
  public static int sumOdd(int n){
    if(n==0)
      return 0;
    if(n%2==0)
      return sumOdd(n-1);
    else
      return n+sumOdd(n-1);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    System.out.println("Sum of first "+n+" even numbers : "+sumEven(n));
    System.out.println("Sum of first "+n+" odd numbers : "+sumOdd(n));
  }
}