import java.util.*;

public class TemperatureConverter{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Choose the input unit :\n1for Celsius\n2 for Kelvin\n3 for Fehrenheit.");
    int x=sc.nextInt();
    float temp;
    switch(x){
      case 1:
        System.out.print("Enter Temperature in Celsius : ");
        temp=sc.nextFloat();
        System.out.println(temp+" Celsius = "+(temp+273)+" Kelvin");
        System.out.println(temp+" Celsius = "+(9*temp/5+32)+" Fehrenheit");
        break;
      case 2:
        System.out.print("Enter Temperature in Kelvin : ");
        temp=sc.nextFloat();
        System.out.println(temp+" Kelvin = "+(temp-273)+" Celsius");
        System.out.println(temp+" Kelvin = "+(9*(temp-273)/5+32));
        break;
      case 3:
        System.out.print("Enter Temperature in Fehrenheit : ");
        temp=sc.nextFloat();
        System.out.println(temp+" Fehrenheit = "+(5*(temp-32)/9)+" Celsius");
        System.out.println(temp+" Fehrenheit = "+((5*(temp-32)/9)+273)+" Kelvin");
        break;
      default:
        System.out.println("Enter a valid option.");
    }
  }
}