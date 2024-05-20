/*
  WAP to find for a number given by user :-
      (i)   Sum of Digits.
      (ii)  Sum of Digits at Odd Places.
      (iii) Sum of Digits at Even Places.
*/

import java.util.*;

public class SumOfDigits{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Number : ");
    int n=sc.nextInt();
    n=Math.abs(n);
    int sum1=0,sum2=0,cnt=1;
    for(int i=n;i>0;i/=10,cnt++){
      if(cnt%2==0)
        sum1+=i%10;
      else
        sum2+=i%10;
    }
    System.out.println("\nSum of digits : "+(sum1+sum2));
    if(cnt%2==0){
      System.out.println("Sum of digits at even places : "+sum1);
      System.out.println("Sum of digits at even places : "+sum2);
    }else{
      System.out.println("Sum of digits at even places : "+sum2);
      System.out.println("Sum of digits at even places : "+sum1);
    }
  }
}