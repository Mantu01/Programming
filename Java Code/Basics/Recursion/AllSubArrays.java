import java.util.Scanner;
import java.util.ArrayList;

public class AllSubArrays{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    System.out.println("Enter all the elements :");
    int[] arr=new int[n];
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
      System.out.println("\nAll Posible sub arrays :");
    printSubArray(arr,n);
  }
  public static void printSubArray(int[] arr, int n){
    ArrayList<Integer>list=new ArrayList<>();
    print(0,n,list,arr);
  }
  public static void print(int i, int n, ArrayList<Integer>list,int[] arr){
    if(i==n){
      System.out.print("{ ");
      for(int j=0;j<list.size();j++)
        System.out.print(list.get(j)+" ");
      System.out.println("}");
      return ;
    }
    list.add(arr[i]);
    print(i+1, n,list,arr);
    list.remove(list.size()-1);
    print(i+1,n,list,arr);
  }
}