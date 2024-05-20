import java.util.*;

public class SimpleInterest{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the principal amount : ");
    float p=sc.nextFloat();
    System.out.print("Enter anual rate percent : ");
    float r=sc.nextFloat();
    System.out.print("Enter the time period : ");
    float t=sc.nextFloat();
    float SI=p*r*t/100;
    System.out.println("Simple Interest : "+SI);
    System.out.println("Total amount : "+(p+SI));
  }
}