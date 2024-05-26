import java.util.Scanner;

public class NumberOfDigits{
  public static int countDigits(int n, int i){
    if(n==0)
      return i;
    return countDigits(n/10,i+1);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    System.out.println(n+" has "+countDigits(n,0)+" digits.");
  }
}