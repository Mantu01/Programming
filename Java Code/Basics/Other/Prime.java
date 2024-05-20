// WAP to find whether a number given by user is prime or not.

import java.util.*;

public class Prime{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Number : ");
    int n=sc.nextInt();
    if(n<2){
      System.out.println(n+" is neither Prime nor Composite ..");
      return ;
    }
    boolean IsPrime=true;
    for(int i=2;i<=Math.sqrt(n);i++){
      if(n%i==0){
        IsPrime=false;
        break;
      }
    }
    if(IsPrime)
      System.out.println(n+" is Prime Number.");
    else
        System.out.println(n+" is Composite Number.");
  }
}