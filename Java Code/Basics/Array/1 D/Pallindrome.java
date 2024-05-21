import java.util.*;

public class Pallindrome{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the number of elements : ");
    int n=sc.nextInt();
    int[] arr=new int[n];
    System.out.println("Enter all the elements :");
    for(int i=0;i<n;i++)
      arr[i]=sc.nextInt();
    boolean isPallindrome=true;
    for(int i=0;i<n/2;i++){
      if(arr[i]!=arr[n-1-i]){
        isPallindrome=false;
        break;
      }
    }
    if(isPallindrome)
      System.out.println("The given array is Pallindrome.");
    else
      System.out.println("The given array is not Pallindrome.");
  }
}