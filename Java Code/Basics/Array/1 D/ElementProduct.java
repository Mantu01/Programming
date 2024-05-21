import java.util.*;

public class ElementProduct{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int prod=1;
    for(int i=0;i<n;i++)
      prod*=arr[i];
    System.out.println("Product of all the elements : "+prod);
  }
}