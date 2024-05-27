import java.util.Scanner;

public class PallindromeSeries{
  public static int rev(int n,int sum){
    if(n==0)
      return sum;
    sum=sum*10+n%10;
    return rev(n/10,sum);
  }
  public static boolean isPallindrome(int n){
    return n==rev(n,0);
  }
  public static void pallindrome(int n,int i){
    if(n==0)
      return;
    if(isPallindrome(i)){
      System.out.print(i+" ");
      n--;
    }
    pallindrome(n,i+1);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    System.out.println(n+" pallindrome number are :");
    System.out.println(" ");
    pallindrome(n,0);
  }
}