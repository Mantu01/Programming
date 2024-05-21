import java.util.*;

public class SmallestElement{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
      int idx=0,ans=arr[0];
    for(int i=1;i<n;i++){
      if(arr[i]<ans){
        ans=arr[i];
        idx=i;
      }
    }
    System.out.println("Smallest element in the given array is "+ans+" at index "+idx);
  }
}