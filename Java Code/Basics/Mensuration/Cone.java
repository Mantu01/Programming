import java.util.*;

public class Cone{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    float PI=22.0f/7.0f;
    System.out.println("For the Cone :-");
    System.out.print("Enter radius : ");
    float r=sc.nextFloat();
    System.out.print("Enter height : ");
    float h=sc.nextFloat();
    float l=(float)Math.sqrt(r*r+h*h);             //  l = Slant height
    float LSA=PI*r*l;
    float TSA=PI*r*(l+r);
    float V=PI*r*r*h/3;
    System.out.println("Lateral Surface Area : "+LSA);
    System.out.println("Total Surface Area : "+TSA);
    System.out.println("Volume : "+V);
  }
}