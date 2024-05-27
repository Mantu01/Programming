import java.util.Scanner;

public class Power{
  public static float pow(float x, int n){
    if(n==0)
      return 1;
    if(n==1)
      return x;
    return x*pow(x,n-1);
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the base : ");
    float x=sc.nextFloat();
    System.out.print("Enter the exponent : ");
    int n=sc.nextInt();
    boolean isNegative=false;
    if(n<0)
      isNegative=true;
    n=Math.abs(n);
    if(isNegative)
      System.out.println(x+" raised to power "+n+" = "+1/pow(x,n));
    else
      System.out.println(x+" raised to power "+n+" = "+pow(x,n));
  }
}