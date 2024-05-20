import java.util.*;

public class NumberSystem{
  public static boolean inValidBinary(int num){
    for(int i=num;i>0;i/=10){
      if(i%10>1)
        return true;
    }
    return false;
  }
  public static boolean inValidOctal(int num){
    for(int i=num;i>0;i/=10){
      if(i%10>7)
        return true;
    }
    return false;
  }
  public static int rev(int num){
    int ans=0;
    for(int i=num;i>0;i/=10)
      ans=ans*10+i%10;
    return ans;
  }
  public static int btd(int num){
    int ans=0;
    for(int i=num,j=1;i>0;i/=10,j*=2)
      ans+=(i%10)*j;
    return ans;
  }
  public static int otd(int num){
    int ans=0;
    for(int i=num,j=1;i>0;i/=10,j*=8)
      ans+=(i%10)*j;
    return ans;
  }
  public static int dtb(int num){
    int a=num;
    if(num%2==0)
      num++;
    int ans=0;
    for(int i=num;i>0;i/=2)
      ans=ans*10+i%2;
    ans=rev(ans);
    if(a%2==0)
      return ans-1;
    return ans;
  }
  public static int dto(int num){
    int a=num;
    if(num%8==0)
      num++;
    int ans=0;
    for(int i=num;i>0;i/=8)
      ans=ans*10+i%8;
    ans=rev(ans);
    if(a%8==0)
      return ans-1;
    return ans;
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Choose the input format :\n1 for Binary number\n2 for Octal number\n3 for Decimal number.");
    int x=sc.nextInt();
    int num;
    switch(x){
      case 1:
        System.out.print("Enter the binary number : ");
        num=sc.nextInt();
        if(inValidBinary(num)){
          System.out.println(num+" is not a valid binary number.");
          return ;
        }
        System.out.println("For "+num+" in :");
        System.out.println(" ->  in Octal : "+dto(btd(num)));
        System.out.println(" ->  in Decimal : "+btd(num));
        break;
      case 2:
        System.out.print("Enter the octal number : ");
        num=sc.nextInt();
        if(inValidOctal(num)){
          System.out.println(num+" is not a valid octal format");
          return ;
        }
        System.out.println("For "+num+" in :");
        System.out.println(" ->  in Binary : "+dtb(otd(num)));
        System.out.println(" ->  in Decimal : "+otd(num));
        break;
      case 3:
        System.out.print("Enter decimal number : ");
        num=sc.nextInt();
        System.out.println("For "+num+" in :");
        System.out.println(" ->  in Binary : "+dtb(num));
        System.out.println(" ->  in Octal : "+dto(num));
        break;
      default:
        System.out.println("Enter a valid option.");
    }
  }
}