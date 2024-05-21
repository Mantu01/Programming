import java.util.*;

public class Cube{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("For the cube :");
    System.out.print("Enter edge length : ");
    float a=sc.nextFloat();
    float TSA=6*a*a;
    float LSA=4*a*a;
    float V=a*a*a;
    System.out.println("Lateral Surface Area = "+LSA);
    System.out.println("Total Surface Area : "+TSA);
    System.out.println("Volume : "+V);
  }
}