import java.util.*;

public class BinarySearch{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Given array should be sorted in non-decreasing order.\n");
    System.out.print("Enter Key, K = ");
    int k=sc.nextInt();
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int i=0,j=n-1,mid=0;
    boolean isPresent=false;
    while(i<=j){
      mid=i+(j-i)/2;
      if(arr[mid]==k){
        isPresent=true;
        break;
      }
      else if(arr[mid]>k)
        j=mid-1;
      else
        i=mid+1;
    }
    if(isPresent)
      System.out.println(k+" is present in given array at index "+mid);
    else
      System.out.println(k+" is not present in the given array.");
  }
}