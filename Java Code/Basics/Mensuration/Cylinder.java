import java.util.*;

public class Cylinder{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    float PI=22.0f/7.0f;
    System.out.println("For the Cylinder :-");
    System.out.print("Enter radius : ");
    float r=sc.nextFloat();
    System.out.print("Enter height : ");
    float h=sc.nextFloat();
    float LSA=2*PI*r*h;
    float TSA=2*PI*r*(r+h);
    float V=PI*r*r*h;
    System.out.println("Lateral Surface Area : "+LSA);
    System.out.println("Total Surface Area : "+TSA);
    System.out.println("Volume : "+V);
  }
}