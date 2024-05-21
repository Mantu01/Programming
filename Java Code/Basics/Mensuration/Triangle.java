import java.util.*;

public class Triangle{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter first side : ");
    float a=sc.nextFloat();
    System.out.print("Enter second side : ");
    float b=sc.nextFloat();
    System.out.print("Enter third side : ");
    float c=sc.nextFloat();
    float S=(a+b+c)/2;
    float A=(float)(Math.sqrt(S*(S-a)*(S-b)*(S-c)));
    System.out.println("Perimeter : "+2*S);
    System.out.println("Area = "+A);
  }
}