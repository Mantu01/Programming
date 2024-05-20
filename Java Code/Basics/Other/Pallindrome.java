// WAP to check whether a number given by user is pallindrome or not.

import java.util.*;

public class Pallindrome{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Number : ");
    int n=sc.nextInt();
    boolean isNegative=false;
    if(n<0)
      isNegative=true;
    n=Math.abs(n);
    int revNum=0;
    for(int i=n;i>0;i/=10)
      revNum=revNum*10+i%10;
    if(isNegative){
      revNum=-revNum;
      n=-n;
    }
    if(n==revNum)
      System.out.println(n+" is pallindrome number.");
    else
      System.out.println(n+" is not pallindrome number.");
  }
}