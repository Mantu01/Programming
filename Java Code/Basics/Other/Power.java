import java.util.*;

public class Power{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Base  : ");
    float x=sc.nextFloat();
    System.out.print("Enter the Exponent : ");
    int n=sc.nextInt();
    float pow=1;
    if(n>=0){
      for(int i=1;i<=n;i++)
        pow*=x;
    }else{
      for(int i=n;i<0;i++)
        pow/=x;
    }
    System.out.println(x+" raised to power "+n+" = "+pow);
  }
}