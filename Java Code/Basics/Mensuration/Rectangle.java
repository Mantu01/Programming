import java.util.*;

public class Rectangle{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the length : ");
    float l=sc.nextFloat();
    System.out.print("Enter the breadth : ");
    float b=sc.nextFloat();
    System.out.println("Area of the rectangle : "+l*b);
    System.out.println("Perimeter of the rectangle  "+2*(l+b));
  }
}