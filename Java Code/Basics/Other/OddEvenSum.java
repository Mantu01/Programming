/* 
  WAP for two numbers given by user :
      (i)   Sum of number between the two numbers
      (ii)  Sum of Even numbers between the two numbers
      (iii) Sum of odd numbers between the two numbers
*/

import java.util.*;

public class OddEvenSum{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the First Number : ");
    int a=sc.nextInt();
    System.out.print("Enter the Second Number : ");
    int b=sc.nextInt();
    if(a>b){
      a=a+b;
      b=a-b;
      a=a-b;
    }
    int oddSum=0,evenSum=0;
    for(int i=a+1;i<b;i++){
      if(i%2==0)
        evenSum+=i;
      else
        oddSum+=i;
    }
    System.out.println("\nSum of all numbers between "+a+" and "+b+" = "+(evenSum+oddSum));
    System.out.println("Sum of Odd numbers between "+a+" and "+b+" = "+oddSum);
    System.out.println("Sum of Even numbers between "+a+" and "+b+" = "+evenSum);
  }
}