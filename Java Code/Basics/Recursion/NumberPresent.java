import java.util.Scanner;

public class NumberPresent{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the key : ");
    int k=sc.nextInt();
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    if(isPresent(arr,k))
      System.out.println(k+" is present in the given array.");
    else
      System.out.println(k+" is not present in the given array.");
  }
 public static boolean isPresent(int[] arr, int k){
   return solve(arr,k,0);
 } 
 public static boolean solve(int[] arr,int k, int i){
  if(i==arr.length)
    return false;
  if(arr[i]==k)
    return true;
  return solve(arr,k,i+1);
 }
}