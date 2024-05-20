// WAP to reverse the digits of a number given by user.

import java.util.*;

public class Factorial{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Number : ");
    int n=sc.nextInt();
    if(n<0){
      System.out.println("Factorial is not defined for "+n);
      return ;
    }
    int fac=1;
    for(int i=2;i<=n;i++)
      fac*=i;
    System.out.println("Factorial of "+n+" = "+fac);
  }
}