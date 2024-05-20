// WAP to reverse the digits of a number given by user.

import java.util.*;

public class ReverseDigits{
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
    if(isNegative)
      revNum=-revNum;
    System.out.println("Reverse of "+n+" = "+revNum);
  }
}