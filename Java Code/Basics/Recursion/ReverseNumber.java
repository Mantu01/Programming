import java.util.Scanner;

public class ReverseNumber{
  public static int rev(int n,int sum){
    if(n==0)
      return sum;
    sum=sum*10+n%10;
    return rev(n/10,sum);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number : ");
    int n=sc.nextInt();
    System.out.println("Reversed of "+n+" : "+rev(n,0));
  }
}