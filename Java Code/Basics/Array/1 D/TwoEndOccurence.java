import java.util.Scanner;
import java.util.ArrayList;

public class TwoEndOccurence{
  public static boolean isSorted(int[] arr, int n){
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1])
        return false;
    }
    return true;
  }
  public static int firstIndex(int[] arr, int n, int k){
    if(arr[0]==k)
      return 0;
    int i=0,j=n-1;
    while(i<=j){
      int mid=i+(j-i)/2;
      if(arr[mid]==k && arr[mid-1]!=k)
        return mid;
      if(arr[mid]>=k)
        j=mid-1;
      else
        i=mid+1;
    }
    return -1;
  }
  public static int lastIndex(int[] arr, int n, int k){
    if(arr[n-1]==k)
      return n-1;
    int i=0,j=n-1;
    while(i<=j){
      int mid=i+(j-i)/2;
      if(arr[mid]==k && arr[mid+1]!=k)
        return mid;
      else if(arr[mid]<=k)
        i=mid+1;
      else
        j=mid-1;
    }
    return -1;
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter Key : ");
    int k=sc.nextInt();
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements of sorted array :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    if(!isSorted(arr,n)){
      System.out.println("Given array is not sorted.");
      return ;
    }
    int fidx=firstIndex(arr,n,k);
    if(fidx==-1){
      System.out.println(k+" does not exist in the given array.");
      return ;
    }
    int lidx=lastIndex(arr,n,k);
    System.out.println("First and Last occurence of "+k+" are at index  "+fidx+" and "+lidx+" respectively.");
  }
}