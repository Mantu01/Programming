import java.util.Scanner;

public class MaxMinElement{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int[] ans=MaxMin(arr);
    System.out.println("Largest element : "+ans[0]);
    System.out.println("Smallest element : "+ans[1]);
  }
  public static int[] MaxMin(int[] arr){
    int[] ans=new int[2];
    ans[0]=max(arr,arr[0],1);
    ans[1]=min(arr,arr[0],1);
    return ans;
  }
  public static int max(int[] arr, int k,int i){
    if(i==arr.length)
      return k;
    if(arr[i]>k)
      k=arr[i];
    return max(arr,k,i+1);
  }
  public static int min(int[] arr, int k,int i){
    if(i==arr.length)
      return k;
    if(arr[i]<k)
      k=arr[i];
    return min(arr,k,i+1);
  }
  
}