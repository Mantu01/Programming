import java.util.*;

public class PairSum{
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
    System.out.println("Pair elements whose sum is  "+k+" are :");
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==k){
          System.out.print("("+arr[i]+","+arr[j]+") , ");
        }
      }
    }
  }
}