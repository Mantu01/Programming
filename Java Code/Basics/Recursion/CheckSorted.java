import java.util.Scanner;

public class CheckSorted{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    if(isSorted(arr))
      System.out.println("Given array is sorted.");
    else
      System.out.println("Given array is not sorted.");
  }
 public static boolean isSorted(int[] arr){
   return solve(arr,1);
 } 
 public static boolean solve(int[] arr, int i){
  if(i==arr.length)
    return true;
  if(arr[i-1]>arr[i])
    return false;
  return solve(arr,i+1);
 }
}