import java.util.Scanner;

public class SelectionSort{
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
      int minIdx=i;
      for(int j=i+1;j<arr.length;j++){
        if(arr[minIdx]>arr[j])
          minIdx=j;
      }
      if(minIdx!=i){
        int temp=arr[i];
        arr[i]=arr[minIdx];
        arr[minIdx]=temp;
      }
    }
  }
}