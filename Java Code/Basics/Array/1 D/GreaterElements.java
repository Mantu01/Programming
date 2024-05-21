import java.util.*;

public class GreaterElements{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter K : ");
    int k=sc.nextInt();
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    System.out.println("Elements greater than "+k+" are :");
    for(int i=0;i<n;i++){
      if(arr[i]>k)
        System.out.print(arr[i]+" ");
    }
  }
}