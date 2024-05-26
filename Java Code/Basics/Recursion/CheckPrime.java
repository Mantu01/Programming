import java.util.Scanner;

public class CheckPrime{
  public static boolean isPrime(int n, int i){
    if(i==n)
      return true;
    if(n%i==0)
      return false;
    return isPrime(n,i+1);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter N : ");
    int n=sc.nextInt();
    if(isPrime(n,2))
      System.out.println(n+" is a prime number.");
    else
      System.out.println(n+" is not a prime number.");
  }
}