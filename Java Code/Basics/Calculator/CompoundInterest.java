import java.util.*;

public class CompoundInterest{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the principal amount : ");
    float p=sc.nextFloat();
    System.out.print("Enter anual rate percent : ");
    float r=sc.nextFloat();
    System.out.print("Enter the time period : ");
    float t=sc.nextFloat();
    float TA=(float)(p*Math.pow(1+r/100,t));
    System.out.println("Compound Interest : "+(TA-p));
    System.out.println("Total amount : "+(TA));
  }
}