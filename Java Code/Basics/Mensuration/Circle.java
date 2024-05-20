import java.util.*;

public class Circle{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the radius : ");
    float r=sc.nextFloat();
    System.out.println("For Circle (r = "+r+")");
    float P=44*r/7;
    float A=22*r*r/7;
    System.out.println("Area = "+A);
    System.out.println("Perimeter = "+P);
    System.out.println("\nFor Semi-Circle (r = "+r+")");
    A=A/2;
    P=P/2+r;
    System.out.println("Area = "+A);
    System.out.println("Perimeter = "+P);
  }
}