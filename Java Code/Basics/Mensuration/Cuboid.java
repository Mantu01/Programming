import java.util.*;

public class Cuboid{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("For the cuboid :");
    System.out.print("Enter length : ");
    float a=sc.nextFloat();
    System.out.print("Enter breadth : ");
    float b=sc.nextFloat();
    System.out.print("Enter height : ");
    float c=sc.nextFloat();
    float TSA=2*(a*b+a*c+b*c);
    float LSA=2*(a*c+b*c);
    float V=a*b*c;
    System.out.println("Lateral Surface Area = "+LSA);
    System.out.println("Total Surface Area : "+TSA);
    System.out.println("Volume : "+V);
  }
}