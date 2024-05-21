import java.util.*;

public class Reverse{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    for(int i=0;i<n/2;i++){
      int temp=arr[n-1-i];
      arr[n-1-i]=arr[i];
      arr[i]=temp;
    }
    System.out.println("Reversed array :");
    for(int i=0;i<n;i++)
      System.out.print(arr[i]+" ");
  }
}