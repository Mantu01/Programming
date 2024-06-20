import java.util.Scanner;

public class peakIndex{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    if(n<3){
      System.out.println("Number of elements must be more than 2 for mountain array.");
      return ;
    }
    System.out.println("Enter all the elements of mountain array :");
    int[] arr=new int[n];
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int idx=peak(arr);
    if(idx==-1)
      System.out.println("Peak index does not exist or given array is not a mountain array.");
      else
        System.out.println("Peak index in the given array : "+idx);
  }
  public static int peak(int[] arr){
    int i=0,j=arr.length-1;
    if(arr[i]>arr[i+1] || arr[j]>arr[j-1])
      return -1;
    return findIndex(arr,i,j);
  }
  public static int findIndex(int[] arr, int i, int j){
    if(i>=j)
      return -1;
    int mid=i+(j-i)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
      return mid;
    else if(arr[mid]>=arr[mid-1] && arr[mid]<=arr[mid+1])
      return findIndex(arr,mid+1,j);
    else
      return findIndex(arr,i,mid-1);
  }
}