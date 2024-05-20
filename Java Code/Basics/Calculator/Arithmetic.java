import java.util.*;

public class Arithmetic{
  public static float operations(float a, float b, char c){
    switch(c){
      case '+':
        return a+b;
      case '-':
        return a-b;
      case '*':
        return a*b;
      case '/':
        return a/b;
      case '%':
        return a%b;
      default:
        System.out.println("Enter a valid operator");
        return -1;
    }
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("\nThis calculator only operate + , - , * , / and %\n");
    System.out.print("Enter the first operand : ");
    float a=sc.nextFloat();
    System.out.print("Enter the operator : ");
    String st=sc.next();
    char c=st.charAt(0);
    System.out.print("Enter the second operand : ");
    float b=sc.nextFloat();
    float result=operations(a,b,c);
    System.out.println(a+" "+c+" "+b+" = "+result);
  }
}