import java.util.*;

public class NumberOfDigits{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Number : ");
    int n=sc.nextInt();
    if(n==0){
      System.out.println(n+" has 1 digits.");
      return ;
    }
    int cnt=0;
    for(int i=n;i>0;i/=10,cnt++);
    System.out.println(n+" has "+cnt+" digits.");
  }
}