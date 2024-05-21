import java.util.*;

public class Sphere{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("For the Sphere :-");
    System.out.print("Enter radius : ");
    float r=sc.nextFloat();
    float TSA=88*r*r/7;           // TSA = 4*pie*r*r
    float V=88*r*r*r/21;         //  V = (4/3)*pie*r*r*r
    System.out.println("Total Surface Area : "+TSA);
    System.out.println("Volume : "+V);
  }
}