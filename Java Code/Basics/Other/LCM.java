// WAP to find the HCF of N numbers

import java.util.*;
public class LCM{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter Number of numbers : ");
    int n=sc.nextInt();
    if(n<2){
      System.out.println("There must be atleast 2 numbers.");
      return ;
    }
    int[] arr=new int[n];
    System.out.println("Enter all the "+n+" numbers :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int MaxNum=arr[0];
    for(int i=1;i<n;i++){
      if(MaxNum<arr[i])
        MaxNum=arr[i];
    }
    int lcm=MaxNum;
    int cnt=1;
    while(true){
      lcm=MaxNum*cnt;
      boolean isLcm=true;
      for(int i=0;i<n;i++){
        if(lcm%arr[i]!=0){
          isLcm=false;
          break;
        }
      }
      if(isLcm)
        break;
      cnt++;
    }
    System.out.print("LCM("+arr[0]);
    for(int i=1;i<n;i++)
      System.out.print(","+arr[i]);
    System.out.println(") = "+lcm);
  }
}