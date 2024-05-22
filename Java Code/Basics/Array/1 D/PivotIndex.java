import java.util.Scanner;

public class PivotIndex{
  public static int sum(int[] arr, int a, int b){
    int ans=0;
    for(int i=a;i<b;i++)
      ans+=arr[i];
    return ans;
  }
  public static int pivot(int[] arr, int n){
    for(int i=1;i<n-1;i++){
      int leftSum=sum(arr,0,i);
      int rightSum=sum(arr,i+1,n);
      if(leftSum==rightSum)
        return i;
    }
    return -1;
  }
  public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the size of array : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements of array :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    int idx=pivot(arr,n);
    if(idx==-1){
      System.out.println("Pivot index does not exist in the code");
      return ;
    }
    System.out.println("Pivot index in the given array is "+idx);
  }
}