import java.util.Scanner;

public class BubbleSort{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    sort(arr);
    System.out.println("Sorted array :");
    for(int i=0;i<n;i++)
      System.out.print(arr[i]+" ");
    System.out.println(" ");
  }
  public static void sort(int[] arr){
    for(int i=0;i<arr.length;i++){
      for(int j=1;j<arr.length-i;j++){
        if(arr[j-1]>arr[j]){
          int temp=arr[j-1];
          arr[j-1]=arr[j];
          arr[j]=temp;
        }
      }
    }
  }
}