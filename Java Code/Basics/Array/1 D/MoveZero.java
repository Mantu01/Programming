import java.util.*;

public class MoveZero{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int idx=n-1;
    for(int i=n-1;i>=0;i--){
      if(arr[i]!=0){
        int temp=arr[i];
        arr[i]=arr[idx];
        arr[idx]=temp;
        idx--;
      }
    }
    System.out.println("New array whose zeros are moved to left :");
    for(int i=0;i<n;i++)
      System.out.print(arr[i]+" ");
  }
}