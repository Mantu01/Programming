import java.util.Scanner;

public class DigitSum{
  public static int sum(int n){
    if(n==0)
      return 0;
    return n%10+sum(n/10);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    System.out.println("Reversed of "+n+" : "+sum(n));
  }
}