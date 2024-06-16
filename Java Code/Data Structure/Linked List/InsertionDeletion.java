import java.util.Scanner;

public class InsertionDeletion{
  static class node{
    int data;
    node next;
    
    node(int data){
      this.data=data;
      this.next=null;
    }
  }
  public static int getLength(node head){
    int cnt=0;
    node curr=head;
    while(curr!=null){
      curr=curr.next;
      cnt++;
    }
    return cnt;
  }
  public static node opertation(int x, int data, int p, node head){
    int size=getLength(head);
    if(p<1 || p-1>size ||(x==2 && p>size)){
      System.out.print("\n"+p+" position doesn't exist in the current LL ");
      if(x==1)
        System.out.println("to insert node.");
      else
        System.out.println("to delete node.");
      return head;
    }
    node temp=new node(data);
    if(p==1){
      if(x==1){
        temp.next=head;
        head=temp;
      }
      else
        head=head.next;
      return head;
    }
    node curr=head;
    while((p--)>2)
      curr=curr.next;
    if(x==1){
      temp.next=curr.next;
      curr.next=temp;
    }
    else
      curr.next=curr.next.next;
    return head;
  }
  public static void Print(node head){
    node curr=head;
    while(curr!=null){
      System.out.print(curr.data+" -> ");
      curr=curr.next;
    }
    System.out.println(" null");
  }
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    node head=null;
    System.out.print("1 for insertion, 2 for deletion else to terminate opertation : ");
    int x=sc.nextInt();
    while(x==1 || x==2){
      int data=0;
      if(x==1){
        System.out.print("Enter data : ");
        data=sc.nextInt();
      }
      System.out.print("Enter position : ");
      int p=sc.nextInt();
      head=opertation(x,data,p,head);
      System.out.println("\n Current LL :");
        Print(head);
      System.out.print("1 for insertion, 2 for deletion else to terminate opertation : ");
      x=sc.nextInt();
    }
  }
}