import java.util.Scanner;

public class CheckPallindrome{
  public static int rev(int n,int sum){
    if(n==0)
      return sum;
    sum=sum*10+n%10;
    return rev(n/10,sum);
  }
  public static boolean isPallindrome(int n){
    return n==rev(n,0);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    if(isPallindrome(n))
      System.out.println(n+" is a pallindrome number.");
    else
      System.out.println(n+" is not pallindrome number.");
  }
}