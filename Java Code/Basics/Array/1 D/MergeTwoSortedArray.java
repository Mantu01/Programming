import java.util.Scanner;

public class MergeTwoSortedArray{
  public static boolean isSorted(int[] arr, int n){
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1])
        return false;
    }
    return true;
  }
  public static int[] merge(int[] arr1,int[] arr2, int n1, int n2){
    if(n1==0)
      return arr2;
    if(n2==0)
      return arr1;
    int[] arr=new int[n1+n2];
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
      if(arr1[i]<=arr2[j])
        arr[k++]=arr1[i++];
      else
        arr[k++]=arr2[j++];
    }
    while(i<n1)
      arr[k++]=arr1[i++];
    while(j<n2)
      arr[k++]=arr2[j++];
    return arr;
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of first array : ");
    int n1=sc.nextInt();
    int[] arr1=new int[n1];
    System.out.println("Enter all the elements of the first sorted array :");
    for(int i=0;i<n1;i++)
      arr1[i]=sc.nextInt();
    System.out.print("Enter the size of second array : ");
    int n2=sc.nextInt();
    int[] arr2=new int[n2];
    System.out.println("Enter all the elements of the second sorted array :");
    for(int i=0;i<n2;i++)
      arr2[i]=sc.nextInt();
    if(!isSorted(arr1,n1) || !isSorted(arr2,n2)){
      System.out.println("Both array should be sorted.");
      return ;
    }
    int[] arr=merge(arr1,arr2,n1,n2);
    System.out.println("Merged array :");
    for(int i=0;i<n1+n2;i++)
      System.out.print(arr[i]+" ");
  }
}