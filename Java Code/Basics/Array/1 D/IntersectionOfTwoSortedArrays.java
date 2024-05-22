import java.util.Scanner;
import java.util.ArrayList;

public class IntersectionOfTwoSortedArrays{
  public static boolean isSorted(int[] arr, int n){
    for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1])
        return false;
    }
    return true;
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("NOTE : Elements of array should be sorted in non-decreasing order\n");
    System.out.print("Enter the size of first array : ");
    int n1=sc.nextInt();
    int[] arr1=new int[n1];
    System.out.println("Enter all the elements of first array :");
    for(int i=0;i<n1;i++)
      arr1[i]=sc.nextInt();
    System.out.print("Enter the size of second array : ");
    int n2=sc.nextInt();
    int[] arr2=new int[n2];
    System.out.println("Enter all the elements of second array :");
    for(int i=0;i<n2;i++)
      arr2[i]=sc.nextInt();
    if(!isSorted(arr1,n1) || !isSorted(arr2,n2)){
      System.out.println("Both array should be sorted in non-decreasing order.");
      return ;
    }
    ArrayList<Integer>arr=new ArrayList<Integer>();
    int idx=-1;
    for(int i=0;i<n1;i++){
      for(int j=idx+1;j<n2;j++){
        if(arr1[i]==arr2[j]){
          arr.add(arr1[i]);
          idx=j;
          break;
        }
      }
      while(i<n1-1 && arr1[i]==arr1[i+1])
        i++;
    }
    if(arr.isEmpty()){
      System.out.println("There is no element common to both given array.");
      return ;
    }
    System.out.println("Intersection of the sorted array :");
    for(int i=0;i<arr.size();i++)
      System.out.print(arr.get(i)+" ");
  }
}