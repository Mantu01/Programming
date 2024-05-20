// WAP to find the HCF of N numbers

import java.util.*;
public class HCF{
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
    int SmallestNum=arr[0];
    for(int i=1;i<n;i++){
      if(SmallestNum>arr[i])
        SmallestNum=arr[i];
    }
    int hcf=1;
    for(int i=SmallestNum;i>1;i--){
      boolean isHcf=true;
      for(int j=0;j<n;j++){
        if(arr[j]%i!=0){
          isHcf=false;
          break;
        }
      }
      if(isHcf){
        hcf=i;
        break;
      }
    }
    System.out.print("HCF("+arr[0]);
    for(int i=1;i<n;i++)
      System.out.print(","+arr[i]);
    System.out.println(") = "+hcf);
  }
}