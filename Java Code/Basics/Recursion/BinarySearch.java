import java.util.Scanner;

public class BinarySearch{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the key : ");
    int k=sc.nextInt();
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter the elements of sorted array :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    if(!isSorted(arr)){
      System.out.println("Given array is not sorted.");
      return ;
    }
    int idx=search(arr,k);
    if(idx==-1)
      System.out.println(k+" is not present in the given array");
    else
      System.out.println(k+" is presetn at index "+idx);
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
  public static int search(int[] arr, int k){
    return solution(arr,k,0,arr.length-1);
  }
  public static int solution(int[] arr, int k, int s, int e){
    if(s>e)
      return -1;
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
      return mid;
    else if(arr[mid]>k)
      e=mid-1;
    else
      s=mid+1;
    return solution(arr,k,s,e);
  }
}