import java.util.Scanner;
import java.util.ArrayList;

public class PeakIndex{
  public static int peakIndex(int[] arr, int n){
    int i=0,j=n-1;
    while(i<j){
      int mid=i+(j-i)/2;
      if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        return mid;
      else if(arr[mid]>arr[mid-1] && arr[mid]<arr[mid+1])
        i=mid+1;
      else
        j=mid-1;
    }
    return -1;
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    if(n<3){
      System.out.println("Number of elements should be greater than or equal to 3.");
      return ;
    }
    int[] arr=new int[n];
    System.out.println("Enter all the elements of mountain array :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int idx=peakIndex(arr,n);
    if(idx==-1){
      System.out.println("Given array is not in mountain format.");
      return ;
    }
    System.out.println("Peak index in the given mountain array is "+idx+" whose value is "+arr[idx]);
  }
}