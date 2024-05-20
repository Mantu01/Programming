// WAP to find the nth fibonacci term.

import java.util.*;

public class FibonacciTerm{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.print("Enter the Number : ");
    int n=sc.nextInt();
    if(n<1){
      System.out.println("Number of terms should be greater than 0.");
      return ;
    }
    int ans=1,prev1=1,prev2=0;
    for(int i=1;i<=n;i++){
      ans=prev1+prev2;
      prev2=prev1;
      prev1=ans;
    }
    System.out.println("Term "+n+" of fibonacci series is "+ans);
  }
}